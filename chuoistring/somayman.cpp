#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
bool cong(int n){
	int tmp;
	int tong=0;
	while(n!=0){
		tmp=n%10;
		n/=10;
		tong+=tmp;
		if(tong==1){
			return true;
		}
	}
	return false;
}
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int dem=0;
	for(int i=0; i<n; i++){
		if(cong(i) == true){
			dem++;
		}
	}
	printf("%d\n", dem);
	printf("%d", cong(n));
	return 0;
}
