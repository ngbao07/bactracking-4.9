#include <bits/stdc++.h>
using namespace std;
#define ll long long

string str;
char a[15];
int n, x[15], mark[15];
set <string> b;

void printarr()
{
    string temp;
    for (int i = 1; i <= n; i++) temp = temp + a[x[i]];
    b.insert(temp);
}



void giai(int i)
{
    for (int j = 0; j < n; j++)
    {
        if (mark[j] == 0)
        {
            x[i] = j;
            mark[j] = 1;
        }
        else continue;
        if (i == n) printarr();
        else giai(i + 1);
        mark[j] = 0;
    }
}

 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("input.inp","r")){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    }
    cin >> str;
    n = str.length();
    for (int i = 0; i < n; i++) a[i] = str[i];
    giai(1);
    set<string> :: iterator itr;
    for (itr = b.begin(); itr != b.end(); itr++)
    cout << *itr << endl;
}