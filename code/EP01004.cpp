/////////NguyenNhatMinh////////
#include <bits/stdc++.h>
#include <string>
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
    int n;
    cin >> n ;
    while(n--){
        long long int n, d = 1 ;
        cin >> n ;
        while(n>0){
            a[d] = n % 10 ;
            n /= 10 ;
            d++;
        }
        for(int i = d-1 ; i >= 1 ; i--) {
            if(a[i]==8&&a[i+1]==0&&a[i-1]==4) {
                a[i] = -1 ;
                a[i+1] = -1 ;
                a[i-1] = -1 ;
            }
        }
        for(int i = d-1 ; i >= 1 ; i--){
            if(a[i]>=0) cout << a[i];
        }
        cout << endl ;
    }
    return 0 ;
}