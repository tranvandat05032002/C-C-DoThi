#include<bits\stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	const long long M=1000000007;
	int n;
	cin>>n;
	int in[n];
	int max=0;
	for(int i=0; i<n; i++){
		cin>>in[i];
			if(max<in[i]){
				
			max = in[i];
			
			}
	}
	long long* res = new long long[max+1];
	for(int i=4; i<=max; i++){
		long long num1=i*i;
		long long num2=num1-(i-1);
		long long num3=num2-(i-1);
		long long num4=num3-(i-1);
		res[i] = (res[i-2] + (num1%M) + (num2%M) + (num3%M) + (num4%M))%M;
	}
	for(int i=0; i<n; i++)
		cout<< res[in[i]]<<endl;
		delete[] res;
	return 0;
}
