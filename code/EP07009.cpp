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
class complexx{
    public:
    int x,y;
};
void tich(complexx &A,complexx &B){
    class complexx C ;
    C.x = A.x+B.x;
    C.y = A.y+B.y ;
    int res = C.x * A.x - C.y * A.y;
    int pos = C.x * A.y + C.y * A.x ;
    cout << res << " ";
    if(pos>0) cout << "+ " << pos << "i, ";
    else cout << "- " << abs(pos) << "i, ";
}
void binhphuong(complexx &A,complexx &B){
    class complexx C ;
    C.x = A.x+B.x;
    C.y = A.y+B.y ;
    int res = C.x * C.x - C.y * C.y;
    int pos = C.x * C.y + C.y * C.x ;
    cout << res << " ";
    if(pos>0) cout << "+ " << pos << "i\n";
    else cout << "- " << abs(pos) << "i\n";
}
int main() {
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    Test(){
        class complexx A,B;
        cin >> A.x >> A.y >> B.x >> B.y ;
        tich(A,B);
        binhphuong(A,B);
    }
    //cin.ignore();

    return 0 ;
}