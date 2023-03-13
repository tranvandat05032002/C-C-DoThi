#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
char* strlwr(char kytu[]){
	for(int i=0; i<strlen(kytu); i++){
		if(kytu[i] >= 65 && kytu[i] <= 90){
			kytu[i]+=32;
		}
	} return kytu;
}
int isalpha(char kytu){
	if(kytu >= 65 && kytu <= 90 || kytu >= 97 && kytu <= 122){
		return 1;
	} return 0;
}
int main(int argc, char *argv[]) {
	char kytu[1000];
	char save[100];
	while(gets(kytu)){
		int ptu=0;
		strlwr(kytu);
		for(int i=0; i<strlen(kytu); i++){
			if(isalpha(kytu[i])){
				save[ptu++] = kytu[i];
			}
		}
		int l=0; int r=ptu-1;
		bool check = true;
		while(l<=r){
			if(save[l] != save[r]){
				check = false;
				break;
			}
			l++;
			r--;
		}
		if(check == true){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
