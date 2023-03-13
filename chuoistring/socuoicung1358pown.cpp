#include <stdio.h>
#include <stdlib.h>
int powmod(int x, int y){
	int res = 1;
	while(y){
		if(y%2 == 1){
			res *= x;
			res %= 10;
		}
		x *= x;
		x %= 10;
		y /= 2;
	} return res;
}
int main(int argc, char *argv[]) {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", powmod(1378, n));
	}
	return 0;
}
