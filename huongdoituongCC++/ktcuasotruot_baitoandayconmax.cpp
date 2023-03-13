#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int in[n + 1];
		int sum = 0;
		for(int i = 0; i < n; i++){
			cin >> in[i];
		}
		for(int i = 0; i < k; i++){
			sum += in[i];
		}
		int res = sum ;
		int index = 0;
		for(int i = k; i < n; i++){
			sum = sum - in[i - k] + in[i];
			if(sum >= res){
				res = sum;
				index = i - k + 1;
			cout<< index << " ";
			}
		}
		cout<< res << endl;
		for(int j = 0; j < k; j++){
			cout<<in[index + j] << " ";
		}
	}
	return 0;
}
