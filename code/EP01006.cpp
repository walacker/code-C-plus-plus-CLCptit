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
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("output.txt","w",stdout);
    //freopen("input.txt","r",stdin);
    int n;
    cin >> n ;
    while(n--){
        int t ;
        cin >> t;
        int check = 0 , res = 2 , pos ;
        while(check==0&&res<=t/2){
            pos = t - res ;
            if(prime(res)==1 && prime(pos)==1) check = 1 ;
            else res++;
        }
        if(check == 0) cout << "-1\n"; else cout << res << " " << pos << endl;
    }
    return 0 ;
}