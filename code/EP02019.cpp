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
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
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
#define Test() int t ;  cin >> t; while(t--)

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

using namespace std;

typedef vector<int> vi;

bool check(vector<vector<char>>&a,int i,int j,int n,int m,vector<vector<bool>>& visited)
{
    return (i>=0 && i<n && j>=0 && j<m && visited[i][j]==false && a[i][j]=='O');
}
void BFS(vector<vector<char>>&a,int n,int m)
{
    vector<vector<bool>>visited;
    queue<pair<int,int>>q;
    FOR(i,0,n){
	    vector<bool>v;
	    FOR(j,0,m){
	        v.pb(false);
	    }
	    visited.pb(v);
	}
	FOR(i,0,m){
	    if(a[0][i]=='O'){
	        q.push({0,i});
	        visited[0][i]=true;
	    }
	    if(a[n-1][i]=='O'){
	        q.push({n-1,i});
	        visited[n-1][i]=true;
	    }
	}
	FOR(i,0,n){
	    if(a[i][0]=='O'){
	        q.push({i,0});
	        visited[i][0]=true;
	    }
	    if(a[i][m-1]=='O'){
	        q.push({i,m-1});
	        visited[i][m-1]=true;
	    }
	}
	while(!q.empty()){
	    int count=q.size();
	    while(count--){
	        int i=q.front().fi;
	        int j=q.front().se;
	        q.pop();
	        if(check(a,i+1,j,n,m,visited)){
	            q.push({i+1,j});
	            visited[i+1][j]=true;
	        }
	        if(check(a,i-1,j,n,m,visited)){
	            q.push({i-1,j});
	            visited[i-1][j]=true;
	        }
	        if(check(a,i,j+1,n,m,visited)){
	            q.push({i,j+1});
	            visited[i][j+1]=true;
	        }
	        if(check(a,i,j-1,n,m,visited)){
	            q.push({i,j-1});
	            visited[i][j-1]=true;
	        }
	    }
	}
	FOR(i,0,n)
	    FOR(j,0,m)
	        if(visited[i][j]==false)
	            a[i][j]='X';
}
int main() {
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    Test(){
        int n,m;
	    cin>>n>>m;
	    vector<vector<char>>a;
	    FOR(i,0,n){
	        vector<char>v;
	        FOR(j,0,m){
	            char a;
	            cin>>a;
	            v.pb(a);
	        }
	        a.pb(v);
	    }
	    BFS(a,n,m);
	    FOR(i,0,n){
	        FOR(j,0,m){
	            cout<<a[i][j]<<" ";
	        }
	        cout << endl ;
	    }
	}
	return 0;
}