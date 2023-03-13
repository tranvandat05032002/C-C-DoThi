#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
void xapxep(int in[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(in[i] > in[j]){
				int tmp = in[i];
				in[i] = in[j];
				in[j] = tmp;
			}
		}
	}
}
int main(int argc, char *argv[]) {
	char kytu[1000];
	gets(kytu);
	int dem=0;
	char save[300];
	int num[1000];
	int ptu=0;
	int tmp;
	for(int i=0; i<strlen(kytu)-2; i++){
		if(isdigit(kytu[i])==1){
			strncpy(save, kytu+(i), 3);
			 tmp = atoi(save);
			num[ptu++] = tmp;
		}
	}
	xapxep(num, ptu);
	for(int i=0; i<ptu; i++){
		while(num[i]>99 && num[i]<1000){
			if(num[i] == num[i+1]){
				dem++;
			}
			i++;
		}
	}
		printf("%d", dem);
	return 0;
}
