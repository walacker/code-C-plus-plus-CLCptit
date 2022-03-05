/////////NguyenNhatMinh////////
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <stdio.h>
#include <bits/stdc++.h>
#define nc(x) cout << (x) << '\n';
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
using namespace std;

int main() {
    faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n, i,a[100] = { 0 } , check = 0 , kq = 0 ;
    cin >> n ;
    a[0] = 0 ;
    FOR(i,1,n) {
        cin >> a[i] ;
        if(check == 0){
            if(a[i] - a[i-1] >15 ){
                kq = a[i-1] + 15 ;
                check = 1;
            }
        }
    }
    if(check) cout << kq ;
    else if(a[n]<75) cout << a[n]+15 ;
    else cout << 90 ;
    return 0 ;
}
