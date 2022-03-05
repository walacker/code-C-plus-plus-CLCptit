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

void solve(string s){
	int i = s.length()-2;
	while(i>=0 && s[i]<=s[i+1]){
		--i;
	}
	if(i==-1){
		cout<<-1<<endl; return;
	}
	int j = s.length()-1;
	while(s[i] <= s[j] || (s[i]>s[j] && s[j]==s[j-1])){
	   --j;
    }
	swap(s[i], s[j]);
	if(s[0]=='0'){
		cout<<"-1\n";
	}
	else cout<<s<<endl;
}


int main(){
	int t;cin>>t;
	while(t--){
		string s; cin >> s;
		solve(s);
	}
}
