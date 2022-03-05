#include <bits/stdc++.h>
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
const int MOD = 1000000007;
typedef long double ld;
#define db(x) cout << (x) << '\n';
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FORAB(i, a, b) for (int i=a; i<(b); i++)
#define FOR(i, a) for (int i=0; i<(a); i++)
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
using namespace std;
#define PI 3.141592653589793238



struct Item {
    string name;
    string group;
    long double mua;
    long double ban;
    int id;
};

bool compare( Item& a,  Item& b) {
    long double profita = a.ban - a.mua;
    long double profitb = b.ban - b.mua;
    return profita > profitb;
}


int main()
{
    int t;
    cin >> t;
    struct Item itemlist[t];
    for (int i = 0; i < t; i++) {
        std::getline(std::cin >> std::ws, itemlist[i].name);
        std::getline(std::cin >> std::ws, itemlist[i].group);
        cin >> itemlist[i].mua >> itemlist[i].ban;
        itemlist[i].id = i+1;
    }
    sort(itemlist, itemlist + t, compare);
    for (int i = 0; i < t; i++) {
        cout << itemlist[i].id << " " << itemlist[i].name << " " << itemlist[i].group << " " << setprecision(2) << fixed << (itemlist[i].ban - itemlist[i].mua) << endl;
    }


}
