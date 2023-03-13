#include <Bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	for(int i=100; i<=450;i++){
		int n = i;
		int tmp;
		int sum = 0;
		int tich = 1;
		while(n>0){
			tmp = n%10;
			n/=10;
			sum+=tmp;
			tich*=tmp;
		}
		if(tich == sum){
			cout<<i<<" ";
		}
	}
	return 0;
}
