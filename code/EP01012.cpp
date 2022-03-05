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
int a[N],t;
using namespace std;

int main() {
    faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t ;
    cin >> t ;
    while(t--){
        ull a ,b;
        cin >> a >> b ;
        int r = __gcd(a,b);
        a /= r;
        b /= r;
        while(a%2==0||a%3==0){
            if(a%2==0) a/=2;
            if(a%3==0) a/=3;
        }
        while(b%2==0||b%3==0){
            if(b%2==0) b/=2;
            if(b%3==0) b/=3;
        }
        if(a==1&&b==1) cout << "YES\n" ; else cout << "NO\n";
    }
    return 0 ;
}
