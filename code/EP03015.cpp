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

void Sol(vector<int> &arr, int l, int r)
  {
      int d = (r-l+1)/2;
      for(int i=0;i<d;i++)
      {
         int t = arr[l+i];
         arr[l+i] = arr[r-i];
         arr[r-i] = t;
      }
  }

int main() {
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s;
	int check = 1;
	while(cin >> s){
        //cout << s << endl;
		int n= s.size();
		FOR(i,0,n) s[i] = tolower(s[i]);
		if(check){
			s[0] = toupper(s[0]);
			check=0;
		}
		if(s[n-1]=='.' || s[n-1]=='!' || s[n-1]=='?'){
			s = s.substr(0, s.size()-1);
			cout << s << endl;
			check=1;
		}
		else cout << s << " ";
	}
    return 0 ;
}
