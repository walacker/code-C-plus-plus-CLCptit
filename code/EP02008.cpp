#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[100005]={},b[100005]={};
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		int l,r,check;
		int max=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++){
			if(b[i]>max) {
				max=b[i];
				check=i;
			}
		}
		int justin=1,justde=1;
		int incre=1,decre=1;
		for(int i=l;i<r;i++){
			if(a[i]<=a[i+1]){
				continue;
			}
			else{
				justin=0;
				break;
			}
		}
		if(justin==1) {
			cout<<"Yes"<<endl;
			continue;
		}
		for(int i=l;i<r;i++){
			if(a[i]>=a[i+1]){
				continue;
			}
			else{
				justde=0;
				break;
			}
		}
		if(justde==1) {
			cout<<"Yes"<<endl;
			continue;
		}
		for(int i=l;i<=check-1;i++){
			if(a[i]<=a[i+1]){
				continue;
			}
			else{
				incre=0;
				break;
			}
		}
		for(int i=check;i<r;i++){
			if(a[i]>=a[i+1]){
				continue;
			}
			else{
				decre=0;
				break;
			}
		}
		if(incre&&decre) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;

	}
}
