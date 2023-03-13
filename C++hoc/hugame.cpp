#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int t;
	scanf("%d", &t);
	int ptu=0;
	if(t>=1 && t<=10)
	for(int i=1; i<=t; i++){
		int nguoi, nguoi1, nguoi2, nguoi3, ngaychoi;
		scanf("%d%d%d%d%d", &nguoi, &nguoi1, &nguoi2, &nguoi3, &ngaychoi);
		if(nguoi<=1 || nguoi >= 30){
			return 0;
		}
		int nguoichuachoi=0;
		int choiroi[nguoi]={0};
		int tmp[nguoi];
		choiroi[nguoi1]=1;
		choiroi[nguoi2]=1;
		choiroi[nguoi3]=1;
		for(int i=1; i<=ngaychoi; i++){
			for(int i=0; i<nguoi; i++){
				tmp[i] = choiroi[i];
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
			}
				printf("%d\n", nguoichuachoi);
	}	
	return 0;
}

