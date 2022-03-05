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

int T;
struct Fraction {
    long long x, y;

};

void rutgon(Fraction &a){
	long long k=__gcd(a.x,a.y);
	a.x/=k;
	a.y/=k;
}

Fraction cong(Fraction a,Fraction b){
	Fraction c;
	long long k=__gcd(a.y,b.y);
	k=a.y*b.y/k;
	c.y=k;
	c.x=a.x*k/a.y+b.x*k/b.y;
	rutgon(c);
	return c;
}
Fraction nhan(Fraction a,Fraction b){
	Fraction c;
	c.x=a.x*b.x;
	c.y=a.y*b.y;
	rutgon(c);
	return c;
}

void read_input(Fraction &a) {
    cin >> a.x >> a.y;
}

void process(struct Fraction &a, struct Fraction &b)  {
    rutgon(a);
    rutgon(b);
    Fraction c=cong(a,b);
	c=nhan(c,c);
	Fraction d=nhan(a,b);
	d=nhan(d,c);
	cout << c.x << "/" << c.y << " " << d.x << "/" << d.y << endl;



}


int main() {
	int t;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}

