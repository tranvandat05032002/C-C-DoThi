#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int *arr;
	arr=(int*)malloc(n*sizeof(int));
	int sum=0;
	if(arr==NULL) {
		return 0;
	}
	for(int i=0;i<n; i++) {
		scanf("%d", (arr+i));
	}
	for(int i=0; i<n; i++) {
		sum+=*(arr+i);
	}
	free(arr);
	printf("%d", sum);
	return 0;
}
