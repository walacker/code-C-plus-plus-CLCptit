#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
struct Student {
    string ten ,lop,ngaysinh;
    double gpa ;
    int id;
};
string standardstring(string s) {
	for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
	stringstream ss(s);
	string token;
	string newstring;
	while (ss >> token) {
		token[0] = toupper(token[0]);
		newstring += token + " ";
	}
	newstring = newstring.substr(0, newstring.length() - 1);
	return newstring;

}

void Xulyngaysinh(string s){
    if(s[1]=='/') s.insert(0,1,'0');
	if(s[4]=='/') s.insert(3,1,'0');
	cout << s ;
}
void Sol(int d){
    int res=3,n=d,pos=100;
    while(res--)
    {
        {if(n>=pos) {
            int r=n/pos;
            printf("%d",r);
            n=n-pos*r;
        }
        else printf("0");
        }
        pos/=10;
    }
    printf(" ");
}

void input(Student lst[], int n) {
    int d = 1 ;
	for (int i = 0; i < n; i++) {
		getline(cin >> ws, lst[i].ten);
		getline(cin >> ws, lst[i].lop);
		getline(cin >> ws, lst[i].ngaysinh);
		lst[i].ten = standardstring(lst[i].ten);
		cin >> lst[i].gpa;
		lst[i].id = d ;
		d++;
	}
}

void print(Student lst[], int n) {
	for (int i = 0; i < n; i++) {
            cout << "B20DCCN" ;
            Sol(lst[i].id);
            cout << lst[i].ten << " " << lst[i].lop <<" " ;
            Xulyngaysinh(lst[i].ngaysinh);
            cout << " " << fixed << setprecision(2) << lst[i].gpa << endl;
	}
}
int main(){
    struct Student lst[50];
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}

