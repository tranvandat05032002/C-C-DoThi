#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n1, n2;
	cin >> n1 >> n2;
	int tong = 0;
	for(int i = n1; i <= n2; i++){
		int tmp = 0;
		int s = i;
		while(s != 0){
			tmp = s % 10;
			s /= 10;
			tong += tmp;
		}
	}
	cout << tong;
	return 0;
}
