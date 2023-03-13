#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
//int tolower(char kytu){
//	if(kytu>=97 && kytu <= 122){
//		kytu -= 32;
//	} return kytu;
//}
//int toupr(char kytu){
//	if(kytu >= 65 && kytu <= 90){
//		kytu += 32;
//	} return kytu;
//}
char chuanhoa(char kytu[]){
	kytu[0] = toupper(kytu[0]);
	for(int i=1; i<strlen(kytu); i++){
		kytu[i] = tolower(kytu[i]);
	}
}
int main(int argc, char *argv[]) {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char kytu[1000];
		gets(kytu);
		char save[100][100];
		int ptu = 0;
		char* token = strtok(kytu, " ");
		while(token!= NULL){
			strcpy(save[ptu++], token);
			token = strtok(NULL, " ");
		}
		for(int i=0; i<ptu; i++){
			chuanhoa(save[i]);
			printf("%s ", save[i]);
		}
		printf("\n");
	}
	return 0;
}
