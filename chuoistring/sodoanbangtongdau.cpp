////c1
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char *argv[]) {
//	int n;
//	scanf("%d", &n);
//	int in[n];
//	int max = -1;
//	int sum = 0;
//	for(int i=0; i<n; i++){
//		scanf("%d", &in[i]);
//	}
//	for(int i=0; i<n; i++){
//		sum+=in[i];
//		int s=0, count=1;
//		for(int j=i+1; j<n; j++){
//			s+=in[j];
//			if(s == sum){
//				count++;
//				s=0;
//			}
//		}
//	if(count > max){
//		max = count;
//	}
//	}
//	printf("%d", max);
//	return 0;
//}
//c2
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d", &n);
	int in[n];
	int max=-1;
	for(int i=0; i<n; i++){
		scanf("%d", &in[i]);
	}
	int sum = 0;
	for(int i=0; i<n; i++){
		sum+=in[i];
		int count=1, s = 0;
		for(int j=i+1;j<n; j++){
			s+=in[j];
			if(s>sum){
				break;
			}
			else if(s == sum){
				count++;
				s=0;
			}
		}
		if(max<count){
			max = count;
		}
		else if(count == 1 && s < sum){
			break;
		}
	}
	printf("%d", max);
}
