#include <stdio.h>
#include <stdlib.h>
#include<math.h>
const int mod = 1e9+7;
long long lt(long long a, long long b, long long c){
	if(b*c==0){
		return 1;
	}
	long long x = pow(a, b*c/2);
	if((b*c)%2==1){
		return x*x*a;
	}
	else{
		return x*x;
	}
}

int main(int argc, char *argv[]) {
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b, c;
		scanf("%lld%lld%lld", &a, &b, &c);
		printf("%lld", lt(a, b, c));
		printf("\n");
	}
	return 0;
}
