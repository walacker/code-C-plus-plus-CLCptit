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

int main() {
    faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ull n,pos,wal;
    cin >> n ;
    long long a[n+1];
    int i , j , M = 1e9+7;
    a[0] = a[1] = 1;
    FOR(i,2,n){
        a[i] = 0 ;
        FOR(j,0,i-1){
            a[i] += a[j] * a[i-j-1];
            a[i] %= M ;
        }
    }
    cout << a[n/2];
    return 0 ;
}
