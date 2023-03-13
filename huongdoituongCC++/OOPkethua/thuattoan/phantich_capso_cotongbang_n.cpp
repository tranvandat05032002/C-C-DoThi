#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int count = 0;
	for(int i = 1; i <= n; i++){
		for(int j = i+1; j <= n; j++){
			if(i*j == n){
				count++;
			}
		}
	}
	cout << count;
	return 0;
}
