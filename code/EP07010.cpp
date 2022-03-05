#include <bits/stdc++.h>
using namespace std;
class Examinee{
    public:
    string s ,ss;
    double x,y,z,d ;
};

void input(Examinee &X){
    getline(cin,X.s);
    getline(cin,X.ss);
    cin >> X.x >> X.y >> X.z ;
    X.d = X.x + X.y +X.z ;
}

void print(Examinee &X){
    cout << X.s << " " << X.ss << " " << fixed << setprecision(1) << X.d << endl;
}
int main(){
    class Examinee A;
    input(A);
    print(A);
    return 0;
}



