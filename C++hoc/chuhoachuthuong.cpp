#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char* strlwr(char kytu[]) {
	for(int i=0; i<strlen(kytu); i++) {
		if(kytu[i]>=65 && kytu[i]<=90){
			kytu[i]+=32;
		}
	} return kytu;
}
char* strlwpr(char kytu[]){
	for(int i=0; i<strlen(kytu); i++) {
		if(kytu[i]>=97 && kytu[i]<=122){
			kytu[i]=kytu[i]-32;
		}
	} return kytu;
}
int main(int argc, char *argv[]) {
	char kytu[150];
	while(scanf("%s", kytu)){
	int countUper = 0;
	int countLower = 0;
		for(int i=0; i<strlen(kytu); i++){
			if(kytu[i] >= 65 && kytu[i] <= 90){
				countUper++;
			}
			else if(kytu[i] == ' '){
				continue;
			}
			else{
				countLower++;
			}
		}
		if(countUper <= countLower){
			strlwr(kytu);
		}
		else{
			strupr(kytu);
		}
		printf("%s", kytu);
	printf("\n");
	}
	return 0;
}
