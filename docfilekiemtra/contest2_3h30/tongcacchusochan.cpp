#include<bits/stdc++.h>

using namespace std;

int tong(long long n){
	int s=0;
	while(n !=0) {
		int x = n %10;
		n/=10;
		if(x %2==0){
			s +=x;
		}
	}
	return s;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
			if(n < 0) {
				n *= -1;
			}
			cout << tong(n) << endl;
	}
}
