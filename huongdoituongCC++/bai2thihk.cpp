#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string kytu;
		cin>>kytu;
		int n = kytu.size();
		int res = 0;
		for(int i = 0; i < n; i++){
			res += (kytu[i] - '0');
		}
		if(res % 9 == 0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
