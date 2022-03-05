/////////NguyenNhatMinh////////
#include <bits/stdc++.h>

//   *******    *****   *   *   ******
//      *       *       **  *       *
//      *       *****   * * *      *
//      *       *       *  **     *
//      *       *****   *   *    ******

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define nc(x) cout << (x) << '\n';
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define all(x) x.begin(), x.end()
#define ins insert
#define Test() int t ;  cin >> t; while(t--)

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

using namespace std;

class Examinee{
    public:
        string msv,ten ;
        double toan,ly,hoa ;

};
void tongdiem(Examinee &A){
    double d = 0 ;
    d+= A.toan*2 + A.ly + A.hoa;
    double res = d;
    switch(A.msv[2]){
    case '1':
        d+=0.5;
        cout << "0.5 " ;
        break;
    case '2':
        d+=1;
        cout << "1 " ;
        break;
    case '3':
        d+=2.5;
        cout << "2.5 " ;
        break;
    }
    cout << res << " " ;
    if(d>=24) cout << "TRUNG TUYEN" ;  else cout << "TRUOT";
}

int main() {
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    class Examinee A ;
    getline(cin,A.msv);
    getline(cin,A.ten);
    cin >> A.toan >> A.ly >> A.hoa ;
    cout << A.msv << " " << A.ten << " " ;
    tongdiem(A);
    return 0 ;
}