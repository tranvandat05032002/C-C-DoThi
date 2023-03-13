#include<bits/stdc++.h>
using namespace std;

void swap(char &a, char &b){
	char tmp = a;
	a = b;
	b = tmp;
}

int main(int argc, char** argv) {
	string kytu;
	cin >> kytu;
	int n = kytu.length();
	int count = 1;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(kytu[i] == kytu[j]){
				continue;
			}
			else{
				swap(kytu[i], kytu[j]);
				count++;
			}
		}
	}
	cout << count;
	return 0;
}
