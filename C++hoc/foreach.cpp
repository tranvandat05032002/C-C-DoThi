#include<iostream>
using namespace std;
int main(int argc, char** argv) {
	int n;
	cin >> n;
	int in[n];
	for(int i=0; i<n; i++){
		cin >> in[i];
	}
	for(int x : in){
		cout << x <<" ";
	}
	return 0;
}
