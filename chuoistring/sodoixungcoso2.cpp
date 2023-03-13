#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int save[1000];
		int ptu=0;
		int tmp = 0;
		while(n!=0){
			save[ptu] = n%2;
			ptu++;
			n/=2;
		}
		int l=0, r=ptu-1;
		bool check=true;
		while(l<=r){
			if(save[l] != save[r]){
				check = false;
				break;
			}
			l++;
			r--;
		}
		if(check){
			printf("Yes");
		}
		else{
			printf("No");
		}
		printf("\n");
	}
	return 0;
}
