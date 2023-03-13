#include <stdio.h>
#include <stdlib.h>
void xapxep(int in[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(in[j]>in[i]){
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
	int in1[n], luuhang[n];
	for(int i=0; i<n; i++){
		scanf("%d", &in[i]);
	}
	for(int i=0; i<n; i++){
		in1[i] = in[i];
	}
	xapxep(in1, n);
	int count=0;
	int hang=1;
	luuhang[0]=1;
	for(int i=1; i<n; i++){
		if(in1[i]!=in1[i-1]){
			hang+=count;
			count=0;
			hang++;
			luuhang[i] = hang;	
		}
		else{
			luuhang[i] = hang;
			count++;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(in[i] == in1[j]){
				printf("%d %d ",in[i] ,luuhang[j]);
				printf("\n");
				break;
			}
		}
	}
	return 0;
}
