#include <stdio.h>
#include <stdlib.h>
long long bitcount(int n){
	long long count = 0;
	while(n>0){
		if(n%2!=0)
		count++;
			n/=2;
	} return count;
}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int in[n];
	long long demtong = 0;
	for(int i=1; i<=n; i++){
		demtong += bitcount(i);
	}
	printf("%lld ", demtong);
	return 0;
}
