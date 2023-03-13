//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char *argv[]) {
//	printf("nhap tai san chung cua ong A va ba B:\n");
//	long long taisan;
//	scanf("%lld", &taisan);
//	long long ongA = 0;
//	long long baB=0;
//	ongA += taisan/2;
//	baB+=taisan/2;
//	printf("tai san khi ly hon:\n");
//	printf("%lld\n", ongA);
//	printf("%lld\n", baB);
//	long long taisanongAnhanduoc = 0;
//	long long taisanbaBnhanduoc = 0;
//	taisanongAnhanduoc = ongA+(baB/4);
//	taisanbaBnhanduoc = taisan - (taisanongAnhanduoc);
//	printf("tai san khi ba B chet(die)):\n");
//	printf("tai san ong A nhan duoc = %lld \n", taisanongAnhanduoc);
//	printf("tai san ba B nhan duoc = %lld \n", taisanbaBnhanduoc);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
char* strlwer(char kytu[]){
	for(int i=0; i<strlen(kytu); i++){
		if(kytu[i]>=65 && kytu[i]<=90){
			kytu[i]+=32;
		}
	} return kytu;
}
int main(int argc, char *argv[]) {
//	int t;
//	scanf("%d", &t);
//	getchar();
//	while(t--){
	char kytu[80];
	while(gets(kytu)){
		strlwer(kytu);
		char save[100][100];
		int ptu = 0;
		char* token = strtok(kytu, " ");
		while(token != NULL){
			strcpy(save[ptu++], token);
			token = strtok(NULL, " ");
		}
		for(int i=0; i<ptu-1; i++){
				printf("%c", save[i][0]);
		}	
			printf("%s@gmail.com\n", save[ptu-1]);
	}
//		printf("\n");
//	}
	return 0;
}


