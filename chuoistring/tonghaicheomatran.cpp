#include <stdio.h>
#include <stdlib.h>
#define M 1000000007
int main(int argc, char *argv[]) {
	int t;
	scanf("%d", &t);
	long long int n, m;
	for(int i=0; i<t; i++){
	scanf("%lld", &n);
	m=n;
	long long int count=1;
	long long int sum1=0;
	for(long long int i=1; i<=n; i++){
		n=n%M;
		sum1+=(2*n*i - n+1);
	}
		if(m%2!=0){
		sum1-=((n*(n/2)+n-(n/2)));
		}
	printf("%lld\n", sum1);
	}
	return 0;
}

