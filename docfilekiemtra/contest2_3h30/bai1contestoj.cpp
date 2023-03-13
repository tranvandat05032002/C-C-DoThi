#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	string kytu;
	cin >> kytu;
	int size = kytu.length();
	int t;
	cin >> t;
	string fullName = "";
	for(int i = t - 1; i >= 0 ; i--){
		fullName += kytu[i];
	}
	for(int i = size - 1; i >= t; i--){
		fullName += kytu[i];
	}
	cout << fullName;
	return 0;
}
