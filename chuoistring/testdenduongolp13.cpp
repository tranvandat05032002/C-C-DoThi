#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x, t;
	scanf("%d%d", &x, &t);
	while(t--){
		int vt;
		scanf("%d", &vt);
		int dem=0;
		for(int i=vt; i<=x; i++){
			dem++;
		}
		printf("%d ", dem-1);
	}
	return 0;
}
