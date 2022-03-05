/////////NguyenNhatMinh////////
#include <bits/stdc++.h>

//   *******    *****   *   *   ******
//      *       *       **  *       *
//      *       *****   * * *      *
//      *       *       *  **     *
//      *       *****   *   *    ******

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef long long ll;
typedef long double ld;
#define nc(x) cout << (x) << '\n';
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define ull unsigned long long int
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
#define PI 3.141592653589793238

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        long double kc1 = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        long double kc2 = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
        long double kc3 = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
        if (kc1 + kc2 > kc3 && kc1 + kc3 > kc2 && kc2 + kc3 > kc1) {
            long double s= 0.25*sqrt((kc1+kc2+kc3)*(kc1+kc2-kc3)*(kc2+kc3-kc1)*(kc1+kc3-kc2));
            long double r = kc1*kc2*kc3/4/s;
            cout << fixed << setprecision(3) << r*r*PI;
        }
        else cout << "INVALID";
        cout << endl;
    }

}
