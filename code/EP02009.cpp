/////////NguyenNhatMinh////////
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <queue>
#include <cstring>
#include <bitset>
#include <map>
#include <unordered_map>
#include <stdio.h>
#include <bits/stdc++.h>

//   *******    *****   *   *   ******
//      *       *       **  *       *
//      *       *****   * * *      *
//      *       *       *  **     *
//      *       *****   *   *    ******

typedef long long ll;
typedef long double ld;
typedef long long ll;
typedef long double ld;
#define nc(x) cout << (x) << '\n';
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define ull unsigned long long int
#define all(x) x.begin(), x.end()
#define ins insert
using namespace std;

void Sol(int a[],int b[], int m , int n ){
        int cnt[10000]={0};
        int c[100000],d = 1;
        FOR(i,1,m) cnt[a[i]]++;
        FOR(i,1,n) {
            if(cnt[b[i]]) c[b[i]] = 1; else c[b[i]] = 0 ;
        }
        FOR(i,1,n) {
            if(c[b[i]]&&cnt[b[i]]) {
                                FOR(j,1,cnt[b[i]]) cout << b[i] << " " ;
                                cnt[b[i]]=0;
            }
        }
        sort(a,a+m);
        FOR(i,1,m){
            if(cnt[a[i]]==1) cout << a[i] << " " ;
        }
        cout << endl;
}
int first(int arr[], int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        return first(arr, low, (mid - 1), x, n);
    }
    return -1;
}

void sortA1ByA2(int A1[], int N, int A2[], int M, int ans[])
{
    map<int, int> mp;

    // indexing for answer = ans array
    int ind = 0;

    // initially storing frequency of each element of A1 in
    // map [ key, value ] = [ A1[i] , frequency[ A1[i] ] ]
    for (int i = 0; i < N; i++) {
        mp[A1[i]] += 1;
    }

    // traversing each element of A2, first come first serve
    for (int i = 0; i < M; i++) {

        // checking if current element of A2 is present in
        // A1 or not if not present go to next iteration
        // else store number of times it is appearing in A1
        // in ans array
        if (mp[A2[i]] != 0) {

            // mp[ A2[i] ] = frequency of A2[i] element in
            // A1 array
            for (int j = 1; j <= mp[A2[i]]; j++)
                ans[ind++] = A2[i];
        }

        // to avoid duplicate storing of same element of A2
        // in ans array
        mp.erase(A2[i]);
    }

    // store the remaining elements of A1 in sorted order in
    // ans array
    for (auto it : mp) {

        // it.second = frequency of remaining elements
        for (int j = 1; j <= it.second; j++)
            ans[ind++] = it.first;
    }
}

// Utility function to print an array
void printArray(int arr[], int n)
{
    // Iterate in the array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--){
        int m , n ;
        cin >> m >> n ;
        int a[10000],b[10000];
        FOR(i,0,m-1) cin >> a[i] ;
        FOR(i,0,n-1) cin >> b[i] ;
        //Sol(a,b,m,n);
        int cnt[100000];
        sortA1ByA2(a, m, b, n, cnt);
        printArray(cnt, m);
    }

    return 0 ;
}