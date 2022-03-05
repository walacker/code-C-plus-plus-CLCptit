#include <bits/stdc++.h>
#include<string.h>
using namespace std;
struct Employee {
    string s ,ss,sss;
    string z ,zz, zzz;
};

void input(Employee  &X){
    getline(cin,X.s);
    getline(cin,X.ss);
    getline(cin,X.sss);
    getline(cin,X.z);
    getline(cin,X.zz);
    getline(cin,X.zzz);
}

void Xulyngaysinh(string s){
    if(s[1]=='/') s.insert(0,1,'0');
	if(s[4]=='/') s.insert(3,1,'0');
	cout << s ;
}

void print(Employee  &X){
    cout << "00001 " ;
    cout << X.s << " " << X.ss << " " ;
    Xulyngaysinh(X.sss);
    cout << " " << X.z << " " << X.zz << " " ;
    Xulyngaysinh(X.zzz);
}
int main(){
    struct Employee a;
    input(a);
    print(a);
    return 0;
}



