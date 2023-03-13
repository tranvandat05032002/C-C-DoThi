#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int upper(char c){
	if(c>=65 && c<=90)
	return 1;
	return 0;
}
int main(int argc, char *argv[]) {
	char kytu[500];
	while(gets(kytu)){
	int dem=0;
	for(int i=0; i<strlen(kytu); i++){		
		if(kytu[i]==kytu[i]&& upper(kytu[i])==1){
			dem++;
		}
	}
	printf("%d\n", dem+1);
	}
	return 0;
}

