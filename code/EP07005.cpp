#include <bits/stdc++.h>
using namespace std;
class Point{
    public:
     double x,y ;
};

double distance(Point A , Point B){
    double d = sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
    return d ;
}
void input(Point &A){
    cin >> A.x >> A.y ;
}
void Sol(Point &A , Point &B , Point &C){
    if(distance(A,B)+distance(B,C)<=distance(C,A)||distance(A,B)>=distance(B,C)+distance(C,A)||distance(B,C)>=distance(A,B)+distance(C,A)) cout << "INVALID" << endl;
    else {
        double res = distance(A,B)+distance(B,C)+distance(C,A);
        cout << fixed << setprecision(3) << res << endl;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    class Point A, B,C;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B),input(C);
        Sol(A,B,C) ;
    }
    return 0;
}