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
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

using namespace std;

int main() {
    faster();
    //#ifndef ONLINE_JUDGE
    //freopen("DOCUMENT.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif
    int n ,max = 0; 
	cin >> n ; 
	string s  ; 
	set<string> x ;
	map<string ,int > mp ; 
	cin.ignore(); 
	FOR(i,0,n){
		getline(cin,s) ; 
		int res = sz(s);
		FOR(i,0,res){
			s[i] = tolower(s[i]);
			if(s[i]==','||s[i]=='.'||s[i]=='?'||s[i]=='!'||s[i]==':'||s[i]==';'||s[i]=='-'||s[i]=='/') s[i] = ' ' ; 		
		}
		stringstream ss(s) ; 
		string token ; 
		while(ss>>token){
			if(mp[token]==0) x.ins(token);
			mp[token]++;
			if(mp[token]>max) max = mp[token];
		}
		//cout << s << endl ; 
	}
	while(max>=1){
		for( string s : x ) {
			if(mp[s]==max) cout << s << " " << mp[s] << endl;
		}
		max--;
	}
    return 0 ;
}