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

struct nguoi {
    string ten;
    int ngay;
    int thang;
    int nam;
};



int main()
{
    int t; cin >> t;
    struct nguoi nguois[t];
    for (int i = 0; i < t; i++) {
        cin >> nguois[i].ten;
        scanf("%d/%d/%d", &nguois[i].ngay, &nguois[i].thang, &nguois[i].nam);
    }
    sort(nguois, nguois + t, [](nguoi a, nguoi b) {
        if (a.nam != b.nam) return a.nam < b.nam;
        if (a.thang != b.thang) return a.thang < b.thang;
        return a.ngay < b.ngay;
    });
    cout << nguois[t-1].ten << "\n" << nguois[0].ten << endl;
}
