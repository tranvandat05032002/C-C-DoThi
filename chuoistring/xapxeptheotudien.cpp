#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
void xapxep(char kytu[][100], int n){
	for(int i=0; i<n; i++){
		int min = i;
		for(int j = i+1; j<n; j++){
			if(strcmp(kytu[j], kytu[min]) < 0){
				min = j;
			}
		}
		char tmp[1000];
		strcpy(tmp, kytu[min]);
		strcpy(kytu[min], kytu[i]);
		strcpy(kytu[i], tmp);
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
		while(token != NULL){
			strcpy(save[ptu++], token);
			token = strtok(NULL, " ");
		}
		xapxep(save, ptu);
		for(int i=0; i<ptu; i++){
			printf("%s ", save[i]);
		}
		printf("\n");
	}
	return 0;
}
