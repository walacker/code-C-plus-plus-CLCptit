#include <bits/stdc++.h>
using namespace std;
int m,n,p,a[100][100],b[100][100],c[100][100],res,pos;
void Sol()
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            {
                    c[i][j]=0;
            }
            for(int k=1;k<=m;k++)
               c[i][j]+=a[i][k]*b[k][j];
            cout << c[i][j]<< " " ;
        }
       cout << endl;
        }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t,res;
    cin >> t;
    while(t--){
        cin >> n >> m ;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++) cin >> a[i][j];
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++) b[i][j]=a[j][i];
        Sol();
    }
    return 0;
}
