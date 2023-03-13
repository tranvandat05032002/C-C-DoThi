#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int t, n, m1, m2, m3, d;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%d%d%d", &n, &m1, &m2, &m3, &d);
		int in[n+5] = {0};
		in[m1] = 1;
		in[m2] = 1;
		in[m3] = 1;
		int m11, m22, m33;
		m11 = m1;
		m22 = m2;
		m33 = m3;
		while(d--){
			in[m1 - 1] = 1;
			m1--;
			in[m11 + 1] = 1;
			m11++;
			in[m2 - 1] = 1;
			m2--;
			in[m22 + 1] = 1;
			m22++;
			in[m3 - 1] = 1;
			m3--;
			in[m33 + 1] = 1;
			m33++;
		}
		int count = 0;
		for(int i = 1; i <= n ; i++){
			if(in[i] == 0){
				count++;
			}
		}
		printf("%d", count);
		printf("\n");
		
	}
	return 0;
}
