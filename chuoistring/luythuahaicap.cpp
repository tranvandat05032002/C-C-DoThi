#include <stdio.h>
#include <stdlib.h>
const unsigned int mod = 1000000000+7;
int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d%d%d", &a, &b, &c);
	int res = 1;
	for(int i=1; i<=b*c; i++){
		res = ((res%mod)*(a%mod))%mod;
	}
	printf("%d", res);
	return 0;
}
