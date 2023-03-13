#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
	char kytu[1000];
	gets(kytu);
	int res = 0;
	for(int i=0; i<strlen(kytu); i++){
		if(kytu[i] <= 58){
			res = res*10+kytu[i] - '0';
		}
		else{
			if(res == 0)
				res = 1;
			for(int j=1; j<=res; j++){
				printf("%c", kytu[i]);
			}
			res = 0;	
		}
	}
	return 0;
}
