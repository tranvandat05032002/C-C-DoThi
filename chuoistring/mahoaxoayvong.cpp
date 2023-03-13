#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char *argv[]) {
	int t, k;
	scanf("%d%d", &t, &k);
	getchar();
	while(t--){
		char kytu[1000];
		fgets(kytu, 1000, stdin);
		for(int i=0; i<strlen(kytu); i++){
			if(isalpha(kytu[i])){
				if(isupper(kytu[i])){
					if(kytu[i] + k > 'Z'){
						kytu[i] -= 26;
						kytu[i]  += k;
					}
					else{
						kytu[i] += k;
					}
			printf("%c", kytu[i]);
				}
			}
			else{
				printf("%c", kytu[i]);
			}
		}
	}
	return 0;
}
