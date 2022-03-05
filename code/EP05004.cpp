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
    ifstream input1("DATA1.in");
    ifstream input2("DATA2.in");
    //ifstream input1("input.txt");
    //ifstream input2("output.txt");
    string s ;
    set<string> se1;
    set<string> se2;
    while (input1 >> s) {
        int kq = 0 ;
        try {
            FOR(i,0,sz(s)) s[i] = tolower(s[i]) ;
            se1.insert(s);
            kq = 1;
        }
        catch(...) {
			kq = 0;
		}
    }
    while (input2 >> s) {
        int kq = 0 ;
        try {
            FOR(i,0,sz(s)) s[i] = tolower(s[i]) ;
            se2.insert(s);
            kq = 1;
        }
        catch(...) {
			kq = 0;
		}
    }
    set<string> se3;
		for(string x : se2){
			se3.insert(x);
    }
        for(string x : se1){
		if(!present(se2, x)){
			se3.insert(x);
		}
    }
        for(string x : se3){
            cout << x << " " ;
        }
        cout << endl;
        for(string x : se1){
		if(present(se2, x)){
			cout << x << " " ;
		}
    }
    return 0 ;
}