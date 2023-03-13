#include<bits\stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	string s, sb="", se="";
	int k;
	cin>>s>>k;
	sb=s.substr(0, k);
	se=s.substr(k, s.size()-k);
	reverse(sb.begin(), sb.end());
	reverse(se.begin(), se.end());
	cout<<sb+se;
	return 0;
}
