#include<bits/stdc++.h>
using namespace std;
int main(){
	string kytu;
	cin>>kytu;
	sort(kytu.begin(),kytu.end());
	vector<string>hoanvi;
	do{
		hoanvi.push_back(kytu);
	}
	while(next_permutation(kytu.begin(), kytu.end()));
	cout<<hoanvi.size()<<"\n";
	for(string a : hoanvi){
		cout<<a<<"\n";
	}
}
