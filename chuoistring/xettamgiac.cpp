#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int l1, l2, l3, l4, l5;
	int dem = 0;
	scanf("%d%d%d%d%d", &l1, &l2, &l3, &l4, &l5);
	int save[100];
	int ptu=0;
	save[ptu++] = l1;
	save[ptu++] = l2;
	save[ptu++] = l3;
	save[ptu++] = l4;
	save[ptu++] = l5;
	for(int i=0; i<ptu-2; i++){
			int sum2=0;
		for(int j=i; j<3+i; j++){		
			sum2 += save[j];
		} sum2 -= save[i+2];
		if(sum2 > save[i+2]){
			dem++;
		}
	}
	printf("%d", dem);
	return 0;
}
