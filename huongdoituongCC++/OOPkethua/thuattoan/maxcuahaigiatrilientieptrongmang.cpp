#include<bits/stdc++.h>
#include<set>
#include <algorithm> 
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int in[n];
	set <int> sum;
	for(int i = 0; i < n; i++){
		cin >> in[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			sum.insert(in[j] - in[i]);
		}
	}
	cout << *max_element(sum.begin(), sum.end());
	return 0;
}
