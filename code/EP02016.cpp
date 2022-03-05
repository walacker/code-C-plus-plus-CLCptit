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

int n,m;
int a[1001][1001];
bool visited[1001][1001];

int dx[8] = {-1,0,1,-1,1,-1,0,1};
int dy[8] = {-1,-1,-1,0,0,1,1,1};

void dfs(int i ,int j ){
    visited[i][j] = true ;
    FOR(k,0,8){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 1 && !visited[i1][j1]){
            dfs(i1,j1);
        }
    }
}

void Sol(){
    cin >> n >> m ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin >> a[i][j] ;
        }
    }
    memset(visited, false ,sizeof(visited));
    int res = 0 ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            if(a[i][j] == 1 && !visited[i][j]){
                dfs(i,j);
                res++;
                //cout << i << " " << j << endl ; 
            }
                //cout << a[i][j] << " " ;
        }
    }
    cout << res << endl ;
}
int main() {
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t ;
    cin >> t;
    while(t--){
        Sol();
    }
    //cin.ignore();

    return 0 ;
}