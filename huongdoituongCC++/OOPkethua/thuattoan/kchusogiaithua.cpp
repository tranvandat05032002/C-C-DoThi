#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll factorial(ll n){
	if(n == 1)
		return 1;
	return (n * factorial(n - 1));
}
string numberToString(ll n) {
    char buf[12];
    itoa(n, buf, 10);
    return string(buf);
}


int main(int argc, char** argv) {
	ll n, k;
	cin >> n, k;
	vector <int> save;
	string m = numberToString(factorial(n));	
	for(int i = 0; i < m.size(); i++){
		cout << k;
	}
	return 0;
}
