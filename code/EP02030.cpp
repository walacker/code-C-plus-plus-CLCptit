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

void Sol(int n){
    int a[100][100] = {0} ;
    a[0][n-1] = 1;
    FOR(i,0,n-1){
        if(i>0) a[i][n-1] = a[i-1][n-1] + i + 1;
        int x = i ;
        FORd(j,0,n-1){
            if(i<=j){
                a[i][j] = a[i][j+1] + x + 1;
                x++;
            } else {
                x--;
                a[i][j] = a[i][j+1] + x +1 ;
            }
        }
    }
    FOR(i,0,n-1){
        FOR(j,0,n-1) cout << a[i][j] << " " ;
        cout << endl;
    }
}
int main() {
    faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n, i,a[100] = { 0 } , check = 0 , kq = 0 ;
    cin >> n ;
    Sol(n);
    return 0 ;
}
