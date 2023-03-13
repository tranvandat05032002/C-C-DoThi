#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;
	float result = float( (n * (n + 2) ) / 4 + (n % 4) / 3 + 1 );
	cout << result;
	return 0;
}
