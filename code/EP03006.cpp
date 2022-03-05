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

int tong(int n){
	int res = 0;
	while(n){
		res += n % 10;
		n/=10;
	}
	return res;
}

int sum(string s){
	int res = 0;
	for(char x : s){
		res += x-'0';
	}
	return res;
}

set<int> mm;

void init(){
	mm.insert(9);
	for(int i = 1; i <= 1000; i++){
		if(mm.find(tong(i)) != mm.end()){
			mm.insert(i);
		}
	}
}

int main(){
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	#endif
	init();
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int tong = sum(s);
		if(present(mm, tong)) cout << "1\n";
		else cout << 0 << endl;
	}
	return 0;
}
