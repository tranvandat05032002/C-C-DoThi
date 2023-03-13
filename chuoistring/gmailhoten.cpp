#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
char* strlwer(char kytu[]){
	for(int i=0; i<strlen(kytu); i++){
		if(kytu[i]>=65 && kytu[i]<=90){
			kytu[i]+=32;
		}
	} return kytu;
}
int main(int argc, char *argv[]) {
//	int t;
//	scanf("%d", &t);
//	getchar();
//	while(t--){
	char kytu[80];
	while(gets(kytu)){
		strlwer(kytu);
		char save[100][100];
		int ptu = 0;
		char* token = strtok(kytu, " ");
		while(token != NULL){
			strcpy(save[ptu++], token);
			token = strtok(NULL, " ");
		}
		for(int i=0; i<ptu-1; i++){
				printf("%c", save[i][0]);
		}	
			printf("%s@huscmail.edu.vn\n", save[ptu-1]);
	}
//		printf("\n");
//	}
	return 0;
}
