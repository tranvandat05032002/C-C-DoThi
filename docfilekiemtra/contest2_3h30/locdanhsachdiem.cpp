#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	string s[t+1];
	int point[t+1];
	for(int i = 0; i < t; i++){
		cin >> s[i] >> point[i];
	}
	int count = 0;
	for(int i = 0; i < t; i++){
		if(point[i] >= 4){
			count++;
		}
	}
	cout << count << endl;
	for(int i = 0; i < t; i++){
		if(point[i] >= 4){
			cout << s[i] <<  " " << point[i] << endl;
		}
	}
	return 0;
}
