#include<bits/stdc++.h>
using namespace std;

int checkxau(string kytu){
	int count = 0;
	int n = kytu.length();
	int l = 0;
	int r = n - 1;
	while(l < r){
		if(kytu[l] != kytu[r]){
			count++;
		}
			l++;
			r--;
	}
	return count;
}

int main(int argc, char** argv) {
	string kytu;
	cin >> kytu;
	cout << checkxau(kytu);
	return 0;
}
