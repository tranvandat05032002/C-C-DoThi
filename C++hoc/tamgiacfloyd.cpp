#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a0=1;
	int a;
	for(int i=1; i<=n;){
		a=a0;
		for(int j=1; j<i; j++){
			std:cout<<a;
			a=!a;
		}
		cout<<a;
		cout<<endl;
	a0=!a0;
	i++;
	}
	return 0;
}
