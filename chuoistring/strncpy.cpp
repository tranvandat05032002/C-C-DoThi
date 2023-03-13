#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char *argv[]) {
	char kytu[100];
	gets(kytu);
	char save[50];
//	strncpy(save, kytu+0, 3);
//	save[0] ='\0';
	for(int i=0; i<strlen(kytu)-2; i++){
		strncpy(save, kytu+i, 3);
		printf("%s\n", save);
	}
//	printf("%s\n", save);
	return 0;
}
