#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	long long n, m;
	cin >> n >> m;
	if(n % m == 0 || m % n == 0 || n == 1 || m == 1){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
	return 0;
}
