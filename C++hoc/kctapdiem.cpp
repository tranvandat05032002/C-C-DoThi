#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	long long x, y;
	long long chua1=0, chua2=0, bao1=0, bao2=0;
	unsigned long long s;
	for(int i=0; i<n; i++) {
			scanf("%lld%lld", &x, &y);
		chua1+=x;
		bao1+=(n+1)*x*x-2*x*chua1;
		chua2+=y;
		bao2+=(n+1)*y*y-2*y*chua2;
	} 
	s=bao1+bao2;
	printf("%lld", s);
	return 0;
}
