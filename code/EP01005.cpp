/////////NguyenNhatMinh////////
#include <bits/stdc++.h>
#include <string>
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)


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
    int t ;
    cin >> t ;
    while(t--){
        int N,dem[10000];
        cin >> N;
        int check = 1;
        if(N==1) check = 0 ; else {
        int n = N; // Tao ban sao cua N
        for(int i = 0; i <= n; i++) dem[i] = 0;
        for(int i = 2; i <= n; i++){
        while(n % i == 0){
            ++dem[i];
            n /= i;
        }
    }
    int res = 0 ;
    for(int i = 0; i <= N; i++){
        if(dem[i]) res ++ ;
    }
    if(res!=3) check = 0 ; else {for(int i = 0; i <= N; i++){
        if(dem[i]>1){
                check = 0 ;
        }
    }
    }
        }
    cout << check << endl;
    }
    return 0 ;
}