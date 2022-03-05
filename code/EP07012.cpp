#include <bits/stdc++.h>
#include<string.h>
using namespace std;
struct Student {
    string s ,ss,sss;
    double x,y,z,d ;
};

void input(Student  &X){
    getline(cin,X.s);
    getline(cin,X.ss);
    getline(cin,X.sss);
    cin >> X.x  ;
    X.d = X.x + X.y +X.z ;
}

void Xulyngaysinh(string s){
    if(s[1]=='/') s.insert(0,1,'0');
	if(s[4]=='/') s.insert(3,1,'0');
	cout << s ;
}

void print(Student  &X){
    cout << "B20DCCN001 " ;
    cout << X.s << " " << X.ss << " " ;
    Xulyngaysinh(X.sss);
    cout << " " << fixed << setprecision(2) << X.x << endl;
}
int main(){
    struct Student a;
    input(a);
    print(a);
    return 0;
}
