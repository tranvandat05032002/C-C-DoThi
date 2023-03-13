#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	int in[100];
	int ptu = 0;
	while(t--){
		int a, b;
		cin >> a >> b;
		int max = 0;
		max = ((a + b) + abs(a - b)) / 2;
		in[ptu] = max;
		ptu++;
	}
	sort(in, in + ptu);
	int max = 0;
	for(int i = 0; i < ptu; i++){
		for(int j = i + 1; j < ptu; j ++){
			if(in[i] + in[j] > max){
				max = in[i] + in[j];
			}
		}
	}
	cout << max;
	return 0;
}
