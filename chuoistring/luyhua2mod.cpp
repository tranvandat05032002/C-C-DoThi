#include <stdio.h>
#include <stdlib.h>
const unsigned int M=1000000007;
int main(int argc, char *argv[]) {
	int n;
	long long m=2;
	scanf("%d", &n);
	int i;
	for(i=1; i<n; i++) {
		m=(m*2)%M;
	}
	printf("%lld", m);
	return 0;
}
