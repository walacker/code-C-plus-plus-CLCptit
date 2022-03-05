#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
struct Student
{
    string id, name, lop;
    double sub1, sub2, sub3;
};

bool cmp(Student a, Student b)
{
    return a.name < b.name;
}

void input(Student &a)
{

    getline(cin >> ws, a.id);
    getline(cin >> ws, a.name);
    getline(cin >> ws, a.lop);
    cin >> a.sub1 >> a.sub2 >> a.sub3;
}

void output(Student a)
{
    cout << a.id << " " << a.name << " " << a.lop << " ";
    cout << fixed << setprecision(1);
    cout << a.sub1 << " " << a.sub2 << " " << a.sub3 << endl;
}

int main()
{
    int n;
    cin >> n;
    struct Student lst[100];
    for (int i = 0; i < n; i++)
        input(lst[i]);
    sort(lst, lst + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
        output(lst[i]);
    }
}