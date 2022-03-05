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
        string ten ,pgd;
        int luong , ngay ;
};

void xuly(Examinee &A){
    int res = A.luong*A.ngay ;
    cout << res << " " ;
    if(A.ngay>=25) { cout << res/5 << " " ; res += res/5; }
        else if(A.ngay >=22) { cout << res/10 << " " ; res += res/10 ; }
            else cout << "0 " ;
    if(A.pgd=="PGD") {cout << "200000 " ; res += 200000; }
        else if(A.pgd=="GD") {cout << "250000 " ; res += 250000; }
            else if(A.pgd=="TP") {cout << "180000 " ; res += 180000; }
                else {cout << "150000 " ; res += 150000; }
    //cout << A.pgd  ;
    cout << res ;
}
int main() {
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    class Examinee A ;
    //getline(cin,A.msv);
    getline(cin,A.ten);
    cin >> A.luong >> A.ngay >> A.pgd ;
    cout << "NV01 " << A.ten << " " ;
    xuly(A);
    return 0 ;
}
