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
    while(n--){
        string s ;
        cin >> s ;
        if(s[0] >= 65 && s[0] <= 90) s[0] = tolower(s[0]);
                else if(s[0] >= 97 && s[0] <= 122) s[0] = toupper(s[0]);
        cout << s[0] << endl ;
    }
    return 0 ;
}
