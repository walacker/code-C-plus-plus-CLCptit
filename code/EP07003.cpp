#include <bits/stdc++.h>
using namespace std;
class Fraction{
    public:
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
	class Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}
