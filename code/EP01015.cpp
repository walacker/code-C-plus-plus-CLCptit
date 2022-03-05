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

unsigned long prime(unsigned long n){
    unsigned long i ;
    if(n<2) return 0;
    if(n==2 || n==3) return 1 ;
    if(n%2==0 || n%3==0) return 0 ;
    for(int i=5;i<=sqrt(n);i+=6){
        if(n%i==0||n%(i+2)==0) return 0 ;
    }
    return 1 ;
}

int main() {
    faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t ;
    cin >> t;
    while(t--){
        ull n ;
        cin >> n ;
        ull res = n ;
        int d = 0 ;
        while(n>0){
            int r = n%10;
            d+=r;
            n/=10;
        }
        if(prime(d)==1) cout << res << endl;
        else cout << "-1\n";
    }
    return 0 ;
}
