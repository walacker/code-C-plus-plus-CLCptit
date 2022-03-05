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
#define ull unsigned long long int
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define all(x) x.begin(), x.end()
#define ins insert
const int N = 1e6;
int a[N];
using namespace std;

void print_max(int a[], int n, int k)
{
    // max_upto array stores the index
    // upto which the maximum element is a[i]
    // i.e. max(a[i], a[i + 1], ... a[max_upto[i]]) = a[i]

    int max_upto[n];

    // Update max_upto array similar to
    // finding next greater element
    stack<int> s;
    s.push(0);
    for (int i = 1; i < n; i++) {
        while (!s.empty() && a[s.top()] < a[i]) {
            max_upto[s.top()] = i - 1;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty()) {
        max_upto[s.top()] = n - 1;
        s.pop();
    }
    int j = 0;
    for (int i = 0; i <= n - k; i++) {

        // j < i is to check whether the
        // jth element is outside the window
        while (j < i || max_upto[j] < i + k - 1)
            j++;
        cout << a[j] << " ";
    }
    cout << endl;
}


int main() {
    faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin >> t ;
    while(t--) {
        int m,n,a[100000],b[100000] ;
        cin >> m >> n ;
        FOR(i,0,m-1) cin >> a[i];
        print_max(a, m, n);
        cout << endl;
    }
    return 0 ;
}
