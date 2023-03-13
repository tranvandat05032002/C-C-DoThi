#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int in[10] = {0};
		int tmp;
		for(int i = 1; i <= n; i++){
			tmp = i;
			while(tmp != 0){
				in[tmp % 10]++;
				tmp /= 10;
			}
		}
		for(int i = 0; i < 10; i++){
			cout << in[i] <<" ";
		}
	}
	return 0;
}
