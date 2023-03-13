#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
const long long N = 2e5 + 5;
#define ll long long
ll in[N];	
ll n, k;
bool countCheckK(ll a){
	ll sum = 0;
	int count = 1;
	for(int i = 0; i < n; i++){
		sum += in[i];
		if(sum > a){
			sum = in[i];
			count++;
		}	
	}
	return (count <= k);
}

int main(int argc, char** argv) {
	cin >> n >> k;
	ll l = 1;
	ll r = 0;
	for(int i = 0; i < n; i++){
		cin >> in[i];
		l = max(l, in[i]);
		r += in[i];
	}
//	 r = accumulate(in, in + n, 0);
//	 l = *max_element(in, in + n);
	while(l < r){
		ll middle = l + (r - l) / 2;
		if(countCheckK(middle)) r = middle;
		else l = middle + 1;
	}
	cout << l;
	return 0;
}
