#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int count(int n){
	int dem=0;
	for(int i=5; i<=n; i+=5) {
		int tmp;
		tmp=i;
		while(tmp%5==0){
			++dem;
			tmp/=5;
		}
	} return dem;
}

int main(int argc, char *argv[]) {
	int n;
		scanf("%d", &n);
		printf("%d", count(n));
	return 0;
}
