#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char *argv[]) {
	int k;
	scanf("%d", &k);
	getchar();
	char kytu[500];
	while(gets(kytu)){
		for(int i=0; i<strlen(kytu); i++){
			if(isalpha(kytu[i])){
				if(kytu[i] + k > 'z'){
					kytu[i] -= 26;
					kytu[i] += k; 
				}
				else{
					kytu[i] += k;
				}
			}
			printf("%c", kytu[i]);
		}
		printf("\n");
	}
	return 0;
}
