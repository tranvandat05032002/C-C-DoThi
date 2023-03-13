#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(int argc, char** argv) {
	int n, k;
	cin>>n>>k;
	float in[n];
	for(int i=0; i<n; i++){
		cin>>in[i];
	}
	sort(in, in+n, greater<float>());
	float sum=0;
	for(int i=0; i<k; i++){
		sum+=(float)in[i];
	}
	std:cout<<fixed<<setprecision(1)<<sum;
	return 0;
}
