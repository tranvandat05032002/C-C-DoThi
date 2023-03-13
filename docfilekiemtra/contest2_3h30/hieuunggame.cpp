#include<bits/stdc++.h>

using namespace std;

void game(int n, int a, int b ,int c ,int d){
	int T = 0;
	if(a -1 < d){
		T += (a-1);
	} else {
		T += d;
	}
	if(n - c < d){
		T += (n-c);
	} else {
		T += d;
	}
	float x = (1.0)*(c-b)/2;
	float y = (1.0)*(b-a)/2;
	if(x <= d){
		T -= (2*d-(c-b-1));
	}
	if(y <= d){
		T -= (2*d-(b-a-1));
	}
	cout << n - 3 -T - 4*d;
}

int main(){
	int n;
	cin >> n;
	int a[n*5];
	for(int i=0; i <5*n; i++){
		cin >> a[i];
	}
	for(int i=0; i < 5*n; i+=5){
		game(a[i],a[i+1], a[i+2], a[i+3], a[i+4]);
	}
}
