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
        string ten ,msv;
        int luong , ngay ;
};

void xuly(Examinee &A){
    int res = 0 ; 
    if(A.msv[2]=='0') { cout << A.msv[3] << " " ;  res += A.msv[3] - '0'; }
    else { 
            cout << A.msv[2] << A.msv[3] << " " ;
            res += (A.msv[2]-'0')*10 + (A.msv[3] - '0');
    }
    res = res*A.luong ;
    if(A.msv[0]=='H'&& A.msv[1]=='T') { cout << "2000000 " ; res += 2000000;}
        else if(A.msv[0]=='H'&& A.msv[1]=='P') { cout << "900000 " ; res += 900000;}
            else { cout << "500000 " ; res += 500000;}
    cout << res ;
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
    cin >> A.luong ;
    cout << A.msv << " " << A.ten << " " ;
    xuly(A);
    return 0 ;
}
