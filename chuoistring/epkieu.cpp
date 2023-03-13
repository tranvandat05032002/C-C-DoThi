#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int t, n;
	double a;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		if(n<1000000 && n>0){
			a=1/n;
			printf("%lf.15", a);
		}
	}
	return 0;
}
