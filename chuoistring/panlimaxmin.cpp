#include <stdio.h>
#include <stdlib.h>
void xapxep(int in[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(in[i] < in[j]){
				int tmp = in[i];
				in[i] = in[j];
				in[j] = tmp;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int res = 0;
	int m = n;
	while(n!=0){
		res = res*10 + n%10;
		n/=10;
	}
	printf("%d\n", res);
	int tmp=0;
	int save[1000];
	int ptu=0;
	while(m!=0){
		tmp = m%10;
		m/=10;
		save[ptu++] = tmp;
	}
	xapxep(save, ptu);
	for(int i=0; i<ptu; i++){
	printf("%d %d" ,save[0], save[ptu-1]);
	break;
	}
	return 0;
}
