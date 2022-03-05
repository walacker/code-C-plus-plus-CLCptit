/////////NguyenNhatMinh////////
#include <bits/stdc++.h>

//   *******    *****   *   *   ******
//      *       *       **  *       *
//      *       *****   * * *      *
//      *       *       *  **     *
//      *       *****   *   *    ******

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef long long ll;
typedef long double ld;
#define nc(x) cout << (x) << '\n';
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define ull unsigned long long int
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

struct nguoi {
    string id;
    string ten;
    string lop;
    string email;
    string corp;
    int index;
};

bool comp(nguoi a, nguoi b) {
    return a.id < b.id;
}

string chuanhoaten(string a) {
    stringstream ss(a);
    string token;
    string news;
    while(ss >> token) {
        news += token + " ";
    }
    news = news.substr(0, news.length()-1);
    return news;
}


int main()
{
    int t; cin >> t;
    struct nguoi list[t];
    for (int i = 0; i < t; i++) {
        cin >> list[i].id;
        getline(cin >> ws, list[i].ten);
        list[i].ten = chuanhoaten(list[i].ten);
        cin >> list[i].lop >> list[i].email >> list[i].corp;
        list[i].index = i+1;
    }
    sort(list, list+t, comp);
    int q; cin >> q;
    while (q--) {
        string query; cin >> query;
        for (int i = 0; i < t; i++) {
            if (list[i].corp == query) {
                cout << list[i].index << " " << list[i].id << " " << list[i].ten << " " << list[i].lop << " " << list[i].email << " " << list[i].corp << endl;
            }
        }

    }


}
