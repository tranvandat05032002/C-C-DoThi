#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	vector<int>in;
	in.push_back(10);
	in.push_back(20);
	in.push_back(30);
	std:cout<<in.size()<<endl;
	in.push_back(40);
	cout<<in.size()<<endl;
	cout<<in[1]<<endl;
	cout<<in[in.size()-1]<<endl;
	cout<<in.back()<<endl;
	for(int i=0; i<in.size(); i++){
		cout<<in[i]<<endl;
	}
	for(int x : in){
		cout<<x<<endl;
	}
	// iterator
	for(vector<int> :: iterator it = in.begin(); it!=in.end(); it++){
		cout<<*it<<endl;
	}
	for(auto it=in.begin(); it != in.end(); it++){
		cout<< *it <<endl;
	}
	return 0;
}
