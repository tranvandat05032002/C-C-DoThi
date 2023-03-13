#include <stdio.h>
#include <stdlib.h>
#include<math.h>
const unsigned int mod = 1000000000+7;
long long powmod(int a, int b, int c){
	if(b*c == 0){
		return 1;
	}
	long long x = pow(a, (b*c)/2);
	if((b*c)%2==1){
		return ((((x%mod)*(x%mod))%mod)%mod*(a%mod))%mod;
	}
	else{
		return ((x%mod)*(x%mod))%mod;
	}
}
int main(int argc, char *argv[]) {
	int t;
	scanf("%d", &t);
	while(t--){
		long long x, y, z;
		scanf("%lld%lld%lld", &x, &y, &z);
		printf("%lld", powmod(x, y, z));
		printf("\n");
	}
	return 0;
}
