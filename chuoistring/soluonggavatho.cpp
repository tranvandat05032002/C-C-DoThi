#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int dau, chan;
	scanf("%d%d", &dau, &chan);
	int ga, tho;
	int d, dx, dy;
	d=1*4-1*2;
	dx=dau*4-chan*1;
	dy=1*chan-2*dau;
	if(dx<0 || dy<0){
		printf("-1");
	}
	else{
	ga=dx/d;
	tho=dy/d;
	printf("%d %d", ga, tho);
	}
	return 0;
}
