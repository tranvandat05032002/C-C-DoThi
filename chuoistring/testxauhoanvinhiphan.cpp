#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int in[n+1];
	int t;
	scanf("%d", &t);
	for(int i=0; i<n; i++){
		in[i] = 0;
	}
	while(1){
		int sum=0;
		for(int i=1; i<=n; i++){
	//	sum+=in[i];
		printf("%d", in[i]);
	}
//	if(sum == t){
//		for(int i=1; i<=n; i++){
//			printf("%d", in[i]);
//		}
//			printf("\n");
//	}
		int k=n;
		while(in[k] == 1){
			in[k] = 1 - in[k];
			k--;
		}
		if(k == 0){
			break;
		}
		else{
			in[k] = 1-in[k];
		}
		printf("\n");
	}
	return 0;
}
