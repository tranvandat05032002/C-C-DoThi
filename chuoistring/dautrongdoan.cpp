#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, m;
	scanf("%d%d", &n, &m);
	int in[n];
	for(int i=1; i<=n; i++){
		scanf("%d", &in[i]);
	}
	while(m--){
		int l, r;
		scanf("%d%d", &l, &r);
		int s=1;
		for(int i=l; i<=r; i++){
			s*=in[i];
		}
		if(s == 0){
			printf("0\n");
		}
		else if(s>0){
			printf("+\n");
		}
		else{
			printf("-\n");
		}
	}
	return 0;
}
