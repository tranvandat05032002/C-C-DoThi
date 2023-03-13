#include<bits/stdc++.h>
#include<vector>
using namespace std;

void countPtuNho(int list[], int n){
	vector <int> D;
	for(int i = 0; i < n; i++){ // f(n) = n - 1 + n - 2 + .... + 1 + 0 = O(n^2)
		int count = 0; //O(1)
		for(int j = i + 1; j < n; j++){ //O(n - 1 - i - 1 + 1) * 1 = O(n - i - 1)
			if(list[j] <= list[i]){ //O(1)
				count++;
			}
		}
		D.push_back(count); // O(1)
	}
	for(auto x : D){ //O(n)
		cout << x <<" ";
	}
}

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int list[n];
	for(int i = 0; i < n; i++){
		cin >> list[i];
	}
	countPtuNho(list, n);
	return 0;
}
