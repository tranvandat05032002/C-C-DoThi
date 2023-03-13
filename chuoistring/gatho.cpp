#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, x, y;
	scanf("%d%d", &a, &b);
	x=(4*a-b)/2;
	y=a-x;
	if(2*x+4*y != b || x+y!=a || b%2!=0 || x<0 || y<0){
		printf("-1");
	}
	else{
		printf("%d %d", x, y);
	}
	return 0;
}
