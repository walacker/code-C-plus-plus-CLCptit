#include <bits/stdc++.h>
using namespace std;
struct Fraction{
    long long int x,y ;
};

void input(Fraction &X){
    cin >> X.x >> X.y ;
    //cout << A.x << " " << A.y << " " ;
}
void simplify(Fraction &X){
    long long int d = __gcd(X.x,X.y);
    X.x = X.x/d;
    X.y = X.y/d;
}
void print(Fraction X){
    cout << X.x << "/" << X.y;
}
int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}
