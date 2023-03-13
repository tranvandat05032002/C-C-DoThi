#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
	char kytu[500];
	while(gets(kytu)){
		char save[10];
		int luu[1500];
		int ptu=0;
		int dem=0;
		for(int i=0; i<strlen(kytu)-2; i++){
			strncpy(save, kytu+i, 3);
			luu[ptu++] = atoi(save);
		}
		for(int i=0; i<ptu-1; i++){
			for(int j=i+1; j<ptu; j++){
				if(luu[i] > luu[j]){
					int tmp = luu[i];
					luu[i] = luu[j];
					luu[j] = tmp;
				}
			}
		}
		for(int i=0; i<ptu; i++){
			if(luu[i] != luu[i+1]){
				dem++;
			}
			else{
				dem=0;
			}
			printf("%d ", luu[i]);
		}
		printf("%d ", dem);
		printf("\n");
	}
	return 0;
}
