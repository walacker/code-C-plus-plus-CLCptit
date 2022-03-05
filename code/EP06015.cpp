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

struct data{
	double x;
	double y;
};
double ss(data a,data b,data c){
	return 0.5*abs((b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		double s=0;
		struct data a[n];
		for(int i=0;i<n;i++) cin>>a[i].x>>a[i].y;
		for(int i=1;i<=n-2;i++){
			s+=ss(a[0],a[i],a[i+1]);
		}
		printf("%.3lf\n",s);
	}
}
