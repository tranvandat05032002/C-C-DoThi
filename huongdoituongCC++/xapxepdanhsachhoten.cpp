#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
char* strupr(char kytu[]){
	for(int i=0; i<strlen(kytu); i++){
		if(kytu[i]>=97 && kytu[i]<=122){
			kytu[i]-=32;
		}
	}
	return kytu;
}
void chuanhoa(char kytu[]){
	kytu[0]=toupper(kytu[0]);
	for(int i=1; i<strlen(kytu); i++){
		kytu[i]=tolower(kytu[i]);
	}
}
int main(int argc, char *argv[]) {
	char kytu[100];
	while(gets(kytu)){
	for(int i=0; i<strlen(kytu); i++){
		if(kytu[i]=='***'){
			return 0;
		}
	}
	char save[100][100];
	int ptu=0;
	char* token=strtok(kytu, " ");
		while(token!=NULL){
			strcpy(save[ptu], token);
			ptu++;
			token=strtok(NULL, " ");
		} strupr(save[ptu-1]);
	printf("%s ", save[ptu-1]);
		for(int i=0; i<ptu-1; i++){
			chuanhoa(save[i]);
			printf("%s ", save[i]);
		}
		printf("\n");
	}
	return 0;
}
