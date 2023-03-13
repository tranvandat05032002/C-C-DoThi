#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int t;
	scanf("%d", &t);
	int ptu=0;
	for(int i=0; i<t; i++){
		int nguoi, nguoi1, nguoi2, nguoi3, ngaychoi;
		scanf("%d%d%d%d%d", &nguoi, &nguoi1, &nguoi2, &nguoi3, &ngaychoi);
		int nguoichuachoi=0;
		int choiroi[nguoi]={0};
		int tmp[nguoi];
		choiroi[nguoi1]=1;
		choiroi[nguoi2]=1;
		choiroi[nguoi3]=1;
		for(int i=1; i<=ngaychoi; i++){
			for(int j=0; j<nguoi; j++){
				tmp[j] = choiroi[j];
			}
			for(int i=1; i<=nguoi; i++){
				if(choiroi[i]==1){
					if(i-1>= 1 && i+1 <= nguoi){	
						tmp[i-1]=1;
						tmp[i+1]=1;
					}
				}
			}
			for(int i=1; i<=nguoi; i++){
				choiroi[i] = tmp[i];	
			}	
		}
		for(int i=1; i<=nguoi; i++){
				if(choiroi[i]==0){
					nguoichuachoi++;
				}
				printf("%d ", choiroi[i]);
		}
//				printf("%d", nguoichuachoi);
//				printf("\n");	
	}	
	return 0;
}
