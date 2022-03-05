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
#define pb push_back
#define nc(x) cout << (x) << '\n';
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define ull unsigned long long int
#define all(x) x.begin(), x.end()
#define ins insert
using namespace std;

int findMinOpeartion(int matrix[100][100], int n)
{
    int sumRow[n], sumCol[n];
    memset(sumRow, 0, sizeof(sumRow));
    memset(sumCol, 0, sizeof(sumCol));

    // Calculate sumRow[] and sumCol[] array
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            sumRow[i] += matrix[i][j];
            sumCol[j] += matrix[i][j];
        }

    // Find maximum sum value in either
    // row or in column
    int maxSum = 0;
    for (int i = 0; i < n; ++i) {
        maxSum = max(maxSum, sumRow[i]);
        maxSum = max(maxSum, sumCol[i]);
    }

    int count = 0;
    for (int i = 0, j = 0; i < n && j < n;) {

        // Find minimum increment required in
        // either row or column
        int diff = min(maxSum - sumRow[i],
                       maxSum - sumCol[j]);

        // Add difference in corresponding cell,
        // sumRow[] and sumCol[] array
        matrix[i][j] += diff;
        sumRow[i] += diff;
        sumCol[j] += diff;

        // Update the count variable
        count += diff;

        // If ith row satisfied, increment ith
        // value for next iteration
        if (sumRow[i] == maxSum)
            ++i;

        // If jth column satisfied, increment
        // jth value for next iteration
        if (sumCol[j] == maxSum)
            ++j;
    }
    return count;
}

// Utility function to print matrix
void printMatrix(int matrix[100][100], int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
}
    int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n][n]; int count = 0;
        map<int, int> d;
        vector<int> day;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                if (d[a[i][j]] == 0) day.pb(a[i][j]);
                if (d[a[i][j]] == i) d[a[i][j]]++;
            }
        }

        for (int i = 0; i < day.size(); i++) {
            //cout << day[i] << " " << d[day[i]] << endl;
            if (d[day[i]] == n) count++;
        }
        nc(count);

    }
}
