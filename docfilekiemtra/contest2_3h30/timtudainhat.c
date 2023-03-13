#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char kytu[100];
	while(gets(kytu)){
	int max=0, dem=0;
	//Text to illustrate this problem.
	for(int i=0; i<strlen(kytu); i++){
		if(isalpha(kytu[i])){
			dem++;
		}
		else if(kytu[i] == ';' || kytu[i] == '.' || kytu[i] == ','|| kytu[i] == ' ' || kytu[i] == ':'){
			if(dem>max)
			max=dem;
			dem=0;
		}
		else{
			dem+=1;
			continue;
		}
	}
	printf("%d\n", max);
	}
	return 0;
}
