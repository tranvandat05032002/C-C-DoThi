#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
char* strlwr(char kytu[]){
	for(int i = 0; i < strlen(kytu); i++){
		if(kytu[i] >= 'A' && kytu[i] <= 'Z'){
			kytu[i] += 32;
		}
	}
	return kytu;
}
void xoaXuongDong(char kytu[]){
	size_t len = strlen(kytu);
	if(kytu[len-1]=='\n'){
		kytu[len-1]='\0';
	}
}
int main(int argc, char *argv[]) {
	char kytuS[500];
	fgets(kytuS, sizeof(kytuS), stdin);
	char kytuC[500];
	fgets(kytuC, sizeof(kytuC), stdin);
	fflush(stdin);
	strlwr(kytuS);
	strlwr(kytuC);
	xoaXuongDong(kytuC);
	xoaXuongDong(kytuS);
	int countS = 0;
	int countCinS = 0;
	for(int i = 0; i < strlen(kytuS); i++){
		if(isalpha(kytuS[i])){
			countS++;
		}
	}
	printf("%d\n", countS);
	for(int i = 0; i < strlen(kytuS); i++){
		for(int j = 0; j < strlen(kytuC); j++){
			if(kytuS[i] == kytuC[j]){
				countCinS++;
			}
		}
	}
	printf("%d", countCinS);
	return 0;
}
