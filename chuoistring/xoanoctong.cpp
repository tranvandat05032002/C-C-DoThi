#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	long long sum=0;
	long long in[n];
	
	for(int i=n; i>=1; i++){
		long long num1=i*i;
		long long num2=num1-(i-1);
		long long num3=num2-(i-1);
		long long num4=num3-(i-1);
		sum+=num1+num2+num3+num4;
		break;
	}
	printf("%d", sum);
	return 0;
}
