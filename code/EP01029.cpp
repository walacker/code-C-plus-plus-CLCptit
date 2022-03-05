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

int sol(int n){
    if(n<2) return 0 ;
    FOR(i,2,sqrt(n))
        if(n%i==0) return 0;
    return 1;

}
int main() {
    faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ull n;
    cin >> n ;
    int a[100000] = {0};
    int res = 0 , pos = 1 ;
    FOR(i,2,sqrt(n)) if(sol(i)) a[pos++] = i ;
    double x = sqrt(sqrt(sqrt(n)));
    FOR(i,2,x) if(sol(i)) res++;
    FOR(i,1,pos-2)
        FOR(j,i+1,pos-1)
            if(a[i]*a[j] <= sqrt(n)) res++;
    nc(res);
    return 0 ;
}
