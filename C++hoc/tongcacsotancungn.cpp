#include <bits/stdc++.h>
using namespace std;
string st;
char k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    getline(cin,st);
    cin>>k;
    int dem=0;
    for(int i=0;i<st.length();i++)
    {
        if(st[i]==k)
            dem++;
    }
    cout<<dem;
    return 0;
}
