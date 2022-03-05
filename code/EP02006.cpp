#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a) for (int i=0; i<(a); i++)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

void vietHoa(string &x){
	x[0] = toupper(x[0]);
	for(int i = 1; i < x.length(); i++){
		x[i] = tolower(x[i]);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<ll> A(n+5), B(n+5);
        ll kq = 0;
        FOR(i, n) {
            ll x; cin >> x;
            if (i == 0) A[i] = x;
            else A[i] = A[i-1] + x;
        }
        FOR(i, m) {
            ll x; cin >> x;
            if (i == 0) B[i] = x;
            else B[i] = B[i-1] + x;
        }
        kq = max(A[n-1], B[m-1]);
        FOR(i, min(n,m))  kq = max(kq, max(A[i] + B[m-1] - B[i], B[i] + A[n-1] - A[i]));
        cout << kq << endl;

    }
	return 0;
}
