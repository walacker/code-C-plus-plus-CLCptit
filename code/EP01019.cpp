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
    ull a[10],res,pos,wal;
    FOR(i,0,3) cin >> a[i];
    sort(a,a+4);
    res = a[1] - a[0] ;
    pos = a[2] - a[1] ;
    wal = a[3] - a[2] ;
    ull l = __gcd(res,pos);
    ull r = __gcd(l,wal);
    //cout << l << " " << m << " " ;
    ull M = 1e12 ;
    if(res==0&&pos==0&&wal==0) cout << M;
        else if(res==0&&pos==0) cout << wal ;
            else if(res==0&&wal==0) cout << pos ;
                else if(pos==0&&wal==0) cout << res;
                    else if(res==0) cout << __gcd(pos,wal);
                        else if (pos==0) cout << __gcd(res,wal);
                            else if(wal==0) cout << __gcd(res,pos);
                                else cout << r;
    return 0 ;
}
