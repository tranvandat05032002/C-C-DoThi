#include<bits/stdc++.h>
using namespace std;

int binarySearch(int in[], int n, int x){
	int left = 0;
	int right = n - 1;
	while(left <= right){
		int index = (left + right) / 2;
		if(in[index] == x){
			return index;
		}
		else if(x > in[index]){
			left = index;
		}
		else{
			right = index;
		}
	}
	return -1;
}

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int in[n];
	for(int i = 0; i < n; i++){
		cin >> in[i];
	}
	sort(in, in + n);
	int search;
	cin >> search;
	
	int index = binarySearch(in, n, search);
	if(index == -1){
		cout << "Khong tim thay";
	}
	else{
		cout << "vi tri" << index;
	}
	return 0;
}
