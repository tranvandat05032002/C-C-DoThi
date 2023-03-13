#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void g(int in[], int n){
	++in[n-1];
	for(int i=n-1; i>0; i--){
		if(in[i] > 1){
			++in[n-1];
			in[i] -= 2;
		}
	}
}
void xuat(int in[], int n){
	for(int i=0; i<n; i++){
		printf("%d", in[i]);
	}
	printf("\n");
}
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int in[n];
	for(int i=0; i<n; i++){
		in[i] = 0;
	}
	for(int i=0; i<pow(2, n); i++){
		xuat(in, n);
		g(in, n);
	}
	return 0;
}
