#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int m;
	m = n % 3;
	cout << (n - m) / 3;
	return 0;
}
