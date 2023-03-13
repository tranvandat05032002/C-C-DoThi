#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	const long long M=1000000007;
	int n;
	scanf("%d", &n);
	int in[n];
	int max=0;
	for(int i=0; i<n; i++){
		scanf("%d", &in[i]);
		if(in[i] > max){
			max = in[i];
		}
	}
	long long save[1000];
	long long ptu=0;
	save[ptu++] = in[max+1];
	for(int i=4; i<=max; i++){
		long long num1=i*i;
		long long num2=num1-(i-1);
		long long num3=num2-(i-1);
		long long num4=num3-(i-1);
		save[i] = (save[i-2] + (num1%M) + (num2%M) + (num3%M) + (num4%M))%M;
	}
	for(int i=0; i<n; i++){
		printf("%lld", in[save[i]]);
	}
	return 0;
}
