#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int in[n];
	for(int i = 0; i < n; i++){
		cin >> in[i];
	}
	int max = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if((in[j] - in[i]) > max){
				max = in[j] - in[i];
			}
		}
	}
	cout << max;
	return 0;
}
