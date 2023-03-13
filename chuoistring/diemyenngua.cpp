#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, m;
	scanf("%d%d", &n, &m);
	int in[n][m];
	int min=32678;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &in[i][j]);
		}
	}
	int a, b;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(in[i][j]<min)
				min=in[i][j];
				a=i;
				b=j;
		}
		printf("(%d,%d)", a, b);
		min=32467;
	}
	return 0;
}
