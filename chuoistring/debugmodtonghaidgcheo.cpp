#include <stdio.h>
#include <stdlib.h>
#include<math.h>
const long long mod = 1000000007;
long long modd(long long a, long long b){
	return (((a%mod)*(b%mod))%mod);
}
int main(int argc, char *argv[]) {
	int t;
	scanf("%d", &t);
	long long tong = 0;
	while(t--){
	long long n;
	scanf("%lld", &n);
	long long tong = 0;
		if(n%2 == 0){
		//	tong += modd(n, 2+ modd((n-1), (n+1)));
		//	tong += modd(n, 2+ (pow(n,2)-1));
			tong += (2*modd(n/2, (modd(n, n)+1)));
		}
		else{
			tong += modd(2*n-1,1+modd(n+1,(n-1)/2));
		}
		printf("%lld\n", tong);
	}
	return 0;
}
