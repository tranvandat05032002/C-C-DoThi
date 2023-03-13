#include <stdio.h>
#include <stdlib.h>
//void nhap(int n, int in[]){
//	for(int i=0; i<n; i++){
//		scanf("%d", &in[i]);
//	}
//}
//int tong(int n, int in[]){
//	int tong =0;
//	for(int i=0; i<n; i++){
//		for(int j=0; j<i; j++){
//			scanf("%d", &in[j]);
//			tong+= in[j];
//		}
//		return tong/n;
//	}
//}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int in[n];
	int in2[n];
//	for(int i=0; i<n; i++){
//		scanf("%d", &in[i]);
//	}
	for(int i=0; i<n; i++){
		int tong = 0;
		for(int j=0; j<n; j++){
			scanf("%d", &in[j]);
			tong += in[j];
		}
		printf("%d\n", tong);
	}
	return 0;
}
