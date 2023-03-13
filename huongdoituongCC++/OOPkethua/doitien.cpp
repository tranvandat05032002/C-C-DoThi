#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int n = (a - 1) * (b - 1);
		int gcd = std::__gcd(a, b);
		int result = n % gcd == 0 ? n : -1;
		cout << result << endl;
	}
  return 0;
}
