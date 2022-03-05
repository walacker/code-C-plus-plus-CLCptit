/////////NguyenNhatMinh////////
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define FOR(i,a,b) for(int i=a;i<b;i++)
void Sort(int a[100][100],int n,int t){
    int tg;
    FOR(i,0,n-1){
        FOR(j,i+1,n){
            if(a[i][t] > a[j][t]){
                tg = a[i][t];
                a[i][t] = a[j][t];
                a[j][t] = tg ;
            }
        }
    }
}
int main(){
	//freopen("intput.txt","r",stdin);
   	//freopen("output.txt","w",stdout);
    int m , n , i ;
    scanf("%d%d%d",&m,&n,&i);
    int a[100][100];
    FOR(i,0,m){
        FOR(j,0,n) scanf("%d",&a[i][j]);
    }
    Sort(a,m,i-1);
    FOR(i,0,m){
        FOR(j,0,n) printf("%d ",a[i][j]);
        printf("\n");
    }
	return 0;
}