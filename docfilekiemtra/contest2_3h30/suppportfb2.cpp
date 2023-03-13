#include<bits/stdc++.h>
using namespace std;

void test(int a, int b){
	a++;
	b--;
}

int main(int argc, char** argv) {
	int x = 4;
	int y = 5;
	test(y, x);
	cout << x << " " << y;
	return 0;
}
