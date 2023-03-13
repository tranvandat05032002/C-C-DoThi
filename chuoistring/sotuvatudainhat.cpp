#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char *argv[]) {
	char kytu[200];
	gets(kytu);
	int max=0;
	int d=0;
	int dem=0;
	for(int i=0; i<strlen(kytu); i++){
		if(isalpha(kytu[i])){
			dem++;
		}
		else{
			if(dem>max){
				max=dem;
			}
			if(dem>0){
				d++;
				dem=0;
			}
		}
	}
	if(dem>max){
		max=dem;
	}
		if(dem>0){
			d++;
		}
	printf("%d %d", max, d);
	return 0;
}
