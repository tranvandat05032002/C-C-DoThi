#include <stdio.h>
#include <stdlib.h>
int t;
long long n;
bool check[20];
long long f[55];
int main(int argc, char *argv[]) {
	scanf("%d", &t);
		f[0] = 0;
		f[1] = 1;
		for(int i=2; i<=50; i++){
			f[i] = f[i-1] + f[i-2];
		}
	while(t--){
		scanf("%lld", &n);
		for(int i=0; i<=50; i++){
			for(int j=0; j<=50; j++){
				if(f[i] * f[j] == n){
					check[t] = 1;
				}
			}
		}	
		if(check[t]){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
