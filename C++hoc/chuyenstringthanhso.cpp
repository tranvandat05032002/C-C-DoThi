#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char *argv[]) {
	char kytu[1000];
	gets(kytu);
	int dem=0;
	for(int i=0; i<strlen(kytu); i++){
		if(isalpha(kytu[i]) && kytu[i] == kytu[i+1]){
			dem++;
		}
		else{
			if(dem==0){
				printf("%c", kytu[i]);
			}
			else{
			printf("%d%c", dem+1, kytu[i]);
			dem = 0;
			}
		}
	}
	return 0;
}
