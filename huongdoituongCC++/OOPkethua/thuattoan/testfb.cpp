#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll n;
	cin >> n;
	ll max = 0;
	int in[n];
	for(int i = 0; i < n; i++){
		cin >> in[i];
	}
	for(int i = 0; i < n; i++){
		if((in[i+1] - in[i]) > max){
			max = in[i+1] - in[i];
		}
	}
	cout << max;
	return 0;
}
