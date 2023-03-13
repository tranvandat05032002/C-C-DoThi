#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int *pc;
	int in[n];
	for(int i=0; i<n; i++) {
		scanf("%d", &in[i]);
	}
	int min=in[0];
	for(int i=0; i<n; i++) {
		if(in[i]<min) {
			min=in[i];
		}
	}
	pc=&min;
	printf("%d", *pc);
	return 0;
}
