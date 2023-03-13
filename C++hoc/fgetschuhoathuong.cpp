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
	char kytu[200];
	fflush(stdin);
	while(fgets(kytu, 200, stdin)){
	int demthuong=0, demhoa=0;
	for(int i=0; i<strlen(kytu); i++) {
		if(kytu[i]>=65 && kytu[i]<=90){
			demhoa++;
		}
	}
	for(int i=0; i<strlen(kytu); i++){
		if(kytu[i]>=97 && kytu[i]<=122){
			demthuong++;
		}
	}
	if(demhoa>demthuong){
		printf("%s\n", strlwpr(kytu));
	}
	else {
			printf("%s\n", strlwr(kytu));
	}
	}
	return 0;
}
