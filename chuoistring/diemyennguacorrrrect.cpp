#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int m, n;
	scanf("%d%d", &m, &n);
	int in[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &in[i][j]);
		}
	}
	int max[10], min[10];
	int ptumax=0, ptumin=0;
	for(int i=0; i<m; i++){
		int tmp=in[i][0];
		for(int j=0; j<n; j++){
			if(in[i][j] < tmp){
				tmp=in[i][j];
			}
		}
		min[ptumin++] = tmp;
	}
	for(int j=0; j<n; j++){
		int tmp = in[0][j];
		for(int i=0; i<m; i++){
			if(in[i][j]>tmp){
				tmp=in[i][j];
			}
		}
		max[ptumax++] = tmp;
	}
	int d=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(in[i][j] == min[i] && in[i][j] == max[j]){
				d++;
				break;
			}
		}
		if(d) break;
	}
	if(d){
		printf("Cac phan tu yen ngua la:\n");
	}
	else{
		printf("Khong co phan tu yen ngua");
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(in[i][j] == min[i] && in[i][j] == max[j]){
				printf("(%d,%d); ", i+1, j+1);
			}
		}
	}
	return 0;
}
