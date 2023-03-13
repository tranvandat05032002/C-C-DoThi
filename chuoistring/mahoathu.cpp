#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char *argv[]) {
	char kytu[250];
	gets(kytu);
	int k;
	scanf("%d", &k);
	for(int i=0; i<strlen(kytu); i++){
		if(i==k){
			for(int i=k-1; i>=0; i--){
				printf("%c", kytu[i]);
			}
			for(int i=strlen(kytu)-1; i>=k; i--){
				printf("%c", kytu[i]);
			}
		}
	}
	return 0;
}
