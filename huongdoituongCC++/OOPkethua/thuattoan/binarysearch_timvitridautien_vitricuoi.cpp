#include<bits/stdc++.h>
using namespace std;

int first_binarySearch(int in[], int n, int search){
	int res = -1;
	int l = 0;
	int r = n -1;
	while(l <= r){
		int index = (l + r) / 2;
		if(in[index] == search){
			res = index;
			r = index - 1;
		}
		else if(in[index] < search){
			l = index + 1;
		}
		else r = index - 1;
	}
	return res;
}
int last_binarySearch(int in[], int n, int search){
	int res = -1;
	int l = 0;
	int r = n -1;
	while(l <= r){
		int index = (l + r) / 2;
		if(in[index] == search){
			res = index;
			l = index + 1;
		}
		else if(in[index] < search){
			l = index + 1;
		}
		else r = index - 1;
	}
	return res;
}

int main(int argc, char** argv) {
	int n, search;
	cin >> n >> search;
	int in[n];
	for(int i = 0; i < n; i++){
		cin >> in[i];
	}
	sort(in, in + n);
	cout << first_binarySearch(in, n, search) << " " << last_binarySearch(in, n, search);
	return 0;
}
