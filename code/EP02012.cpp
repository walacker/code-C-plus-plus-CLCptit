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

unsigned int UCLN(unsigned int a, unsigned int b) {
   if(a==b)
      return a;
   else
      if(a>b)
         return UCLN(a-b,b);
      else
         return UCLN(a,b-a);
}
unsigned int UCLN(int a[], unsigned int n) {
   unsigned int temp;
   if(n==1)
      return abs(a[0]);
   else
   {
      temp = abs(a[0]);
      for(unsigned int i = 1; i<n; i++)
         temp = UCLN(temp, abs(a[i]));
   }
   return temp;
}

int main() {
    faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--){
        int m  ;
        cin >> m ;
        int a[100][100];
        FOR(i,1,m)
            FOR(j,1,m) cin >> a[i][j];
        FOR(i,1,m){
            FOR(j,1,m){
                if(i==1||i==m||j==1||j==m) cout << a[i][j] << " " ;
                else cout << "  ";
            }
            cout << endl;
        }
    }

    return 0 ;
}
