#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int isdigit(char kytu){
	if(kytu >= 48 && kytu <= 57){
		return 1;
	} return 0;
}
int main(int argc, char *argv[]) {
	char kytu[1000];
	while(gets(kytu)){
	int save[1000];
	int ptu = 0;
	int dem=0;
		for(int i=0; i<strlen(kytu)-2; i++){
			if(isdigit(kytu[i])){
				for(int j=i; j<=i+2; j++){
					int demres = 0;
					if(kytu[j] == kytu[j+1] && kytu[j] == kytu[j+2]){
						dem = 1;
						break;
					}
					else{
						int res = 0;
						while(isdigit(kytu[j])){
							res = res*10 + kytu[j] - '0';
							demres++;
							if(demres == 3){
								save[ptu++] = res;
							}
							j++;
						}
					}
				}
			}
		}
		for(int i=0; i<ptu-1; i++){
			for(int j=i+1; j<ptu; j++){
				if(save[i] > save[j]){
					int tmp = save[i];
					save[i] = save[j];
					save[j] = tmp;
				}
			}
		}
		for(int i=0; i<ptu; i++){
			if(save[i] != save[i+1]){
				dem++;
			}
		}
		printf("%d", dem);
		printf("\n");
	}
	return 0;
}
