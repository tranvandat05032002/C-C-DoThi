#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[]) {
	char kytu[200];
	while(gets(kytu)){
	int demthuong=0, demhoa=0;
	for(int i=0; i<strlen(kytu); i++) {
		if(kytu[i]>=65 && kytu[i]<=90){
			demhoa++;
		}
		else{
			demthuong++;
		}
	}
	if(demhoa>demthuong){
		for(int i=0; i<strlen(kytu); i++){
			if(kytu[i] >= 'a' && kytu[i] <= 'z'){
				kytu[i]+=32;
			}
			printf("%c", kytu[i]);
		}
	}
	else {
		for(int i=0; i<strlen(kytu); i++){
			if(kytu[i] >= 'A' && kytu[i] <= 'A'){
				kytu[i]-=32;
			}
			printf("%c", kytu[i]);
		}
	}
	}
	return 0;
}

