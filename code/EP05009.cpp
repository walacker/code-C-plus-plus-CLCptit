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

vector<string> day;

void emptyv(vi &v) {
    vector<int>().swap(v);
    //cout << v.capacity() << endl;
}

void checkarr(vi arr, int n)
{
    if (n < 2) {
        emptyv(arr);
        return;
    }
    if(!is_sorted(all(arr))) {
      emptyv(arr);
      return;
    }
    string s;
    for (int i = 0; i < n; i++) {
        s += to_string(arr[i]) + ' ';
    }
    s.substr(0, s.size() - 1);
    day.pb(s);
    emptyv(arr);
}

void subseq(vi arr, int index, vi subarr)
{
    if (index == arr.size())
    {
        int l = subarr.size();
        if (l >= 2) checkarr(subarr, l);
    }
    else
    {
        subseq(arr, index + 1, subarr);
        subarr.push_back(arr[index]);
        subseq(arr, index + 1, subarr);
    }
    emptyv(arr);
    return;
}

int main() {
    faster();
   //#ifndef ONLINE_JUDGE
    freopen("DAYSO.in","r",stdin);
    //#endif
    int n;
    cin >> n;
    vi a(n), b;
    FOR(i,0,n) cin >> a[i];
    subseq(a, 0, b);
    sort(day.begin(), day.end());
    FOR(i,0,sz(day)) {
      cout << day[i] << endl;
    }
    return 0;  
}