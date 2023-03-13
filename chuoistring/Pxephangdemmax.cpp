#include <stdio.h>
#include <stdlib.h>
void xapxep(int in[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(in[j] > in[i]){
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
	int in[n];
	for(int i=0; i<n; i++){
		scanf("%d", &in[i]);
	}
	xapxep(in, n);
	int dem = 0;
	int max = 0;
	for(int i=0; i<n; i++){
		if(in[i] == in[i+1]){
			dem++;
		}
		else{
			save[ptu++] = dem;
			dem = 0;
		}
	}
	return 0;
}
