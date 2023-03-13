#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char *argv[]) {
	int count=0;
	char kytu[500];
	bool check[100][26] = {false};
	while(gets(kytu)){
		for(int i=0; i<strlen(kytu); i++){
			int idx = kytu[i] - 97;
			check[count][idx] = true;
		}
		count++;
	}
		int dem = 0;
		for(int i=0; i<26; i++){
			int vt = 0;
			for(int j=0; j<count; j++)
				if(check[j][i])
				vt++;
				if(vt == count)
				dem++;
			
		}
	printf("%d", dem);
	return 0;
}
