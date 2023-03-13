#include <stdio.h>
#include <stdlib.h>
int powmod(int x, int y, int mod){
	long long res=1;
	for(int i=1; i<=y; i++){
		res *= x;
		res %= mod;
	} return res;
}
int powmod2(int x, int y, int mod){
	long long res = 1;
	while(y){
		if(y%2 == 1){
			res *= x;
			res %= mod;
		}
		x*=x;
		x %= mod;
		y /= 2;
	}
	return res;
}
int main(int argc, char *argv[]) {
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m, mod;
		scanf("%d%d%d", &n, &m, &mod);
		printf("%d", powmod2(n, m, mod));
		printf("\n");
	}
	return 0;
}
