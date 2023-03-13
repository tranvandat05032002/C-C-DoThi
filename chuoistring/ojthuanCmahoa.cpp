#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[]) {
	int n, k;
	scanf("%d%d", &n, &k);
	getchar();
	char kytu[1000];
	while(n--){
		fgets(kytu, 1000, stdin);
		for(int i=0; i<strlen(kytu); i++){
			if(isupper(kytu[i])){
				if(kytu[i] + k > 'Z'){
					kytu[i] -= 26;
					kytu[i] += k;
				} 
				else{
					kytu[i] += k;
				}
			}
		}
		printf("%s", kytu);
		printf("\n");
	}
	return 0;
}
