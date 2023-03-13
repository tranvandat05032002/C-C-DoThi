//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//int main(int argc, char *argv[]) {
//	char kytu[100];
//	fgets(kytu, 100, stdin);
//	int count = 0;
//	for(int i=0; i<strlen(kytu); i++){
//		if(kytu[i] >='A' && kytu[i] <= 'Z'){
//			count++;
//		}
//		else{
//			continue;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char *argv[]) {
	char kytu[100];
	fgets(kytu, 100, stdin);
	int count = 0;
	for(int i=0; i<strlen(kytu); i++){
		if(kytu[i] >='a' && kytu[i] <= 'z'){
			count++;
		}
//		else{
//			continue;
//		}
	}
	printf("%d", count);
	return 0;
}
