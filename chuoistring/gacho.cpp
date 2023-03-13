#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, ga, cho;
	scanf("%d%d", &a, &b);
	ga = (4*a-b)/2;
	cho = a-ga;
	if(ga+cho != a || ga < 0 || cho < 0 || b%2!=0 || 2*ga + 4*cho != b){
		return 0;
	}
	else{
		printf("%d %d", ga, cho);
	}
	return 0;
}
