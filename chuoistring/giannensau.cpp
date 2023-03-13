#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin >> s;
int x = 0, n = s.length();
for (int i = 0; i < n; i++)
if (s[i] < 58) x = x * 10 + s[i] - 48;
else
{
if(x == 0) x = 1;
for (int j = 1; j <= x; j++)
cout << s[i];
x = 0 ;
}
}
