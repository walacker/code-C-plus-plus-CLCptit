/////////NguyenNhatMinh////////
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <queue>
#include <cstring>
#include <bitset>
#include <map>
#include <unordered_map>
#include <stdio.h>
#include <bits/stdc++.h>

//   *******    *****   *   *   ******
//      *       *       **  *       *
//      *       *****   * * *      *
//      *       *       *  **     *
//      *       *****   *   *    ******

typedef long long ll;
typedef long double ld;
typedef long long ll;
typedef long double ld;
#define nc(x) cout << (x) << '\n';
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define ull unsigned long long int
#define all(x) x.begin(), x.end()
#define ins insert
using namespace std;

bool isSplittable(int n, int m)
{
    int total_sum = (n * (n + 1)) / 2;
    int sum_s1 = (total_sum + m) / 2;
    int sum_s2 = total_sum - sum_s1;
    if (total_sum < m)
        return false;
    if (sum_s1 + sum_s2 == total_sum &&
        sum_s1 - sum_s2 == m)
        return (__gcd(sum_s1, sum_s2) == 1);
    return false;
}

int main() {
    faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--){
        int m , n ;
        cin >> m >> n ;
        if (isSplittable(m, n))
            cout << "Yes\n";
                else
            cout << "No\n";
    }

    return 0 ;
}
