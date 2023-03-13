#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int tmp = 0;
	int in[n + 1];
	int ptu = 0;
	while(n != 0){
		tmp = n % 10;
		in[ptu++] = tmp;
		n /= 10;
	}
	for(int i = 0; i < ptu; i++){
		cout << in[i];
	}
	return 0;
}
