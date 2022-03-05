/////////NguyenNhatMinh////////
#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)
const int N = 1e6;
int a[N],b[N];

using namespace std;

//   *******    *****   *   *   ******
//      *       *       **  *       *
//      *       *****   * * *      *
//      *       *       *  **     *
//      *       *****   *   *    ******

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("output.txt","w",stdout);
    //freopen("input.txt","r",stdin);
    int n,a,b;
    cin >> n ;
    long long int res = 1 , pos = 0 ;
    FOR(i,1,n){
        res *= i;
        pos += res ;
    }
    cout << pos ;
    return 0 ;
}
