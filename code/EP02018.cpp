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

int check(int a[100][100], int x1, int x2, int y1, int y2)
{
    int i;
    i = x1;
    for (int j = y1; j <= y2; j++){
        if (a[i][j] == 0){
            return 0;
        }
    }
    i = x2;
    for (int j = y1; j <= y2; j++){
        if (a[i][j] == 0){
            return 0;
        }
    }
    int j;
    j = y1;
    for (int i = x1; i <= x2; i++){
        if (a[i][j] == 0){
            return 0;
        }
    }
    j = y2;
    for (int i = x1; i <= x2; i++){
        if (a[i][j] == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--)
    {
        int a[100][100];
        int n;
        cin >> n;
        FOR(i,0,n){
            FOR(j,0,n){
                char x;
                cin >> x;
                if (x == 'X'){
                    a[i][j] = 1;
                }
                else{
                    a[i][j] = 0;
                }
            }
        }
        int res = n;
        while (res > 0){
            int c = 0;
            int ord = res;
            for (int y1 = 0; y1 <= n - ord; y1++){
                int y2 = y1 + ord - 1;
                for (int x1 = 0; x1 <= n - ord; x1++){
                    int x2 = x1 + ord - 1;
                    if (check(a, x1, x2, y1, y2)){
                        cout << ord << endl;
                        c = 1;
                        break;
                    }
                }
                if (c){
                    break;
                }
            }
            if (c){
                break;
            }
            res--;
        }
        if (!res){
            cout << res << endl;
        }
    }
    return 0;
}

