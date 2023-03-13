#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char* strlwer(char kytu[]){
	for(int i=0; i<strlen(kytu); i++){
		if(kytu[i]>=65 && kytu[i]<=90){
			kytu[i]+=32;
		}
	} return kytu;
}
void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	// TITV\n\0 => TITV\0\0
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

int main(int argc, char *argv[]) {
	char kytu[500];
	fflush(stdin);
	while(fgets(kytu, sizeof(kytu), stdin)){
		strlwr(kytu);
		xoaXuongDong(kytu);
		char save[200][200];
		int ptu = 0;
		char* token = strtok(kytu, " ");
		while(token != nullptr){
			strcpy(save[ptu++], token);
			token = strtok(nullptr, " ");
		}
		for(int i = 0; i < ptu-1; i++){
			printf("%c", save[i][0]);
		}
		printf("%s@huscmail.edu.vn\n", save[ptu-1]);
	}
	return 0;
}
