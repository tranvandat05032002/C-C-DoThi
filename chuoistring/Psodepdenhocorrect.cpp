#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(int argc, char *argv[]) {
	long long save[15];
	long long ptu=0;
	int dem = 0;
//	for(long long i=pow(10,6)+231234; i<pow(10,7); i++){
//		long long tmp = i;
//		long long tmp1 = 0;
//		while(tmp!=0){
//			tmp1 = tmp%10;
//			tmp/=10;
//			save[++ptu] = tmp1;
//		}
//		break;
//	}
	for(int i1=0; i1<=9; ++i1)
		for(int i2=0; i2<=9; ++i2)
			for(int i3=0; i3<=9; ++i3)
				for(int i4=0; i4<=9; ++i4)
					for(int i5=0; i5<=9; ++i5)
						for(int i6=0; i6<=9; ++i6)
							for(int i7=0; i7<=9; ++i7){
								int dau, giua, cuoi=0;
								dau = i1*100+i2*10+i3;
								giua = i4*100+i5*10+i6;
								cuoi = i5*100+i6+10+i7;
								if(dau==giua || dau==cuoi){
									dem++;
								}
							}
			printf("%d", dem);
	return 0;
}
