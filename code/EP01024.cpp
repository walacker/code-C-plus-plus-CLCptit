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
const int N = 1e6;
int a[N];
using namespace std;

int main() {
    faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n , d = 1 ;
    cin >> n ;
    FOR(i,1,n){
        FOR(j,1,d) cout << j;
        d += 2;
        cout << endl;
    }
    return 0 ;
}
