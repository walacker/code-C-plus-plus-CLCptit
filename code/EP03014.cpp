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
    int t ;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s; cin >> s;
        string kq;
        int n = sz(s);
        FOR(i,0,n)
            s[i] = toupper(s[i]);
        FOR(i,0,n) {
            if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C')
                kq += '2';
            else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F')
                kq += '3';
            else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I')
                kq += '4';
            else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L')
                kq += '5';
            else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O')
                kq += '6';
            else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')
                kq += '7';
            else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V')
                kq += '8';
            else
                kq += '9';
        }
        //cout << kq << endl;
        string kq1 = kq; reverse(all(kq1));
        if (kq1 == kq) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0 ;
}
