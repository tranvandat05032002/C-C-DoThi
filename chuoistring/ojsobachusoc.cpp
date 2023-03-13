#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
void xapxep(double in[], double n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(in[i] > in[j]){
				double tmp = in[i];
				in[i] = in[j];
				in[j] = tmp;
			}
		}
	}
}
int main(int argc, char *argv[]) {
	char kytu[500];
	while(gets(kytu)){
		char save[300];
		int dem=0;
		double number[300];
		int ptu=0;
		for(int i=0; i<strlen(kytu)-2; i++){
			strncpy(save, kytu+i, 3);
			int tmp=atoi(save);
			double l = (double)log10(tmp)+1;
				if(l>=3 && l<=3.999565489){
					number[ptu++] = l;
				}
		}
		xapxep(number, ptu);
		for(int i=0; i<ptu; i++){
			if(number[i] != number[i+1]){
				dem++;
			}
		}
		printf("%d\n", dem);
		
	}
	return 0;
}
