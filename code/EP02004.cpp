#include<iostream>
#include<cmath>
long long p=1e9+7;
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,a[10000];
		cin>>n>>x;
		long long sum=0;
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			long long tmp=1;
			for(int j=n-i-1;j>0;j--){
				tmp=(tmp*x)%p;
			}
			sum+=(a[i]*tmp);
			if(sum>p){
				sum%=p;
			}
		}
		cout<<sum<<endl;
	}
}