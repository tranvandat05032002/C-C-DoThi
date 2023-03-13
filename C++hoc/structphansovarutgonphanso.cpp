#include "stdio.h"
#include "math.h"

struct phanSo{
	int tuSo;
	int mauSo;
};

void inputPS (phanSo *PS){
	printf("nhap vao tu so:\n");
	scanf("%d", &PS->tuSo);
	do{
		printf("nhap vao mau so:\n");
		scanf("%d", &PS->mauSo);
	}while(PS->mauSo == 0);
}
void rutGon(phanSo *PS){
	int a = PS->tuSo;
	int b = PS->mauSo;
	int UCLN = 1;
	if(a == 0 || b == 0){
		UCLN = a + b;
	}
	else{
		while(a != b){
			if(a > b){
				a = a - b;
			}
			else{
				b = b - a;
			}
		}
		UCLN = a;
	}
	PS->tuSo /= UCLN;
	PS->mauSo /= UCLN;
}

void printfPS(phanSo PS){
	if(PS.mauSo < 0){	
		PS.tuSo *= -1;
		PS.mauSo *= -1;	
	}
	rutGon(&PS);
	printf("%d/%d", PS.tuSo, PS.mauSo);
}

phanSo congHaiPhanSo(phanSo ps1, phanSo ps2){
	phanSo ketqua;
	
	ketqua.tuSo = ps1.tuSo * ps2.mauSo + ps2.tuSo * ps1.mauSo;
	ketqua.mauSo = ps1.mauSo * ps2.mauSo;
	return ketqua;
}

int main(int argc, char *argv[]) {
	phanSo ps1,ps2;
	inputPS(&ps1);
	printf("phan so 1:");
	printfPS(ps1);
	printf("\n");
	inputPS(&ps2);
	printf("phan so 2:");
	printfPS(ps2);
	printf("\n");
	printf("CongHaiPhanSo:");
	printfPS(ps1); printf("+"); printfPS(ps2); printf("="); printfPS(congHaiPhanSo(ps1, ps2));
	return 0;
}
