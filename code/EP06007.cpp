#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
struct Employee {
    string s ,ss,sss;
    string z ,zz, zzz;
};

void Xulyngaysinh(string s){
    if(s[1]=='/') s.insert(0,1,'0');
	if(s[4]=='/') s.insert(3,1,'0');
	cout << s ;
}

void input(Employee &X){
    getline(cin >> ws,X.s);
    getline(cin >> ws,X.ss);
    getline(cin >> ws,X.sss);
    getline(cin >> ws,X.z);
    getline(cin >> ws,X.zz);
    getline(cin >> ws,X.zzz);
}

void printlist(Employee lst[], int n) {
    int d = 1 ;
	for (int i = 0; i < n; i++) {
            cout << "000" ;
            if(d>=10) cout << d; else cout << "0" << d ;
            cout <<" " << lst[i].s << " " << lst[i].ss << " " ;
            Xulyngaysinh(lst[i].sss);
            cout << " " << lst[i].z << " " << lst[i].zz << " " ;
            Xulyngaysinh(lst[i].zzz);
            cout << endl;
            d++;
	}
}
int main(){
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}
