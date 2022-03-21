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
#define f first
#define s second
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

void io(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
bool cmp(pair<string, int> a, pair<string, int> b) {
    if (a.s == b.s) return a.f < b.f; //nếu bằng số lần xuất hiện thì in theo bảng chữ cái
    return a.s > b.s; //in số lần xuất hiện
}

int main() {
   faster();
   //io();
   //freopen("VANBAN.in", "r", stdin);
   int n;
   cin >> n;
   vector<string> list;
   string delimit = ",.?!:;-/)('_\"–";
   map<string, int> danhdau;
   while (n--) {
       string s;
       getline(cin >> ws, s);
       for (int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
        for (int i = 0; i < delimit.size(); i++) {
            replace(s.begin(), s.end(), delimit[i], ' ');
        }
        string news = s;
        stringstream ss(news);
        string token;
        while (ss >> token) {
            danhdau[token]++;
        }
   }
    vector<pair<string, int> > vectormap;
    for (auto& it : danhdau) {
        vectormap.push_back(it);
    }
    sort(all(vectormap), cmp);
    for (auto i : vectormap) {
         cout << i.f << " " << i.s << endl;
    }
    return 0 ;
}
