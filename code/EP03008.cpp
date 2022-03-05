#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
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
void solve(int s, int m){
	int tmp = s;
	if(s > 9 *m || (s == 0 && m > 2)){
		cout << "-1 -1";
	}
	else{
		vector<int> a(m), b(m);
		for(int i = 0; i < m; i++){
			if(s != 0){
				if(s >= 9){
					a[i] = 9; s -= 9;
				}
				else{
					a[i] = s; s = 0;
				}
			}
			else a[i] = s;
		}
		--tmp;
		for(int i = m - 1; i > 0; i--){
			if(tmp >= 9){
				b[i] = 9; tmp -= 9;
			}
			else if(tmp != 0){
				b[i] = tmp; tmp = 0;
			}
			else b[i] = tmp;
		}
		b[0] = tmp + 1;
		for(int x : b){
			cout << x;
		}
		cout << " ";
		for(int x : a)
			cout << x;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int s,m; cin >> m >> s;
	solve(s, m);
	return 0;
}
