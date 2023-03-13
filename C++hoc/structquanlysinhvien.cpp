#include "stdio.h"
#include "math.h"
#include "string.h"
#include "time.h"

struct date {
	int ngay;
	int thang;
	int nam;
};

struct sinhVien{
	int id;
	char ten[50];
	char gioiTinh[5];
	date ngaySinh;
	int tuoi;
	float diemMon1;
	float diemMon2;
	float diemMon3;
	float diemTrungBinh;
	char hocLuc[10];
	char maLop[30];
};
typedef sinhVien SV;

void nhapSinhVien(SV &sv);

void xoaXuongDong(char kytu[]){
	if(kytu[strlen(kytu) - 1] == '\n'){
		kytu[strlen(kytu) - 1] = '\0';
	}
}

void nhapSinhVien(SV &sv){
	printf("\nID: "); scanf("%d", &sv.id);
	printf("\nTen: "); fflush(stdin); fgets(sv.ten, sizeof(sv.ten), stdin); xoaXuongDong(sv.ten);
	printf("\n GioiTInh: "); fflush(stdin); fgets(sv.gioiTinh, sizeof(sv.gioiTinh), stdin); xoaXuongDong(sv.gioiTinh);
	printf("\n ngaySinh: "); scanf("%d%d%d", &sv.ngaySinh.ngay, &sv.ngaySinh.thang, &sv.ngaySinh.nam);
	
	printf("\n diemMon1: "); scanf("%f", &sv.diemMon1);
	printf("\n diemMon2: "); scanf("%f", &sv.diemMon2);
	printf("\n diemMon3: "); scanf("%f", &sv.diemMon3);
	printf("\n MaLop: "); fflush(stdin); fgets(sv.maLop, sizeof(sv.maLop), stdin); xoaXuongDong(sv.maLop);
}

void inSinhVien(SV sv){
	printf("%5d \t %20s\t %10s \t %2d/%d/%d \t %5d \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %10s \t %10s", sv.id, sv.ten, sv.gioiTinh, sv.ngaySinh, sv.tuoi, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh, sv.hocLuc, sv.maLop);
}

int main(int argc, char *argv[]) {
	SV sv1;
	nhapSinhVien(sv1);
	printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %10s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem Mon 1", "Diem Mon 2", "Diem Mon 3", "Diem Trung Binh", "Hoc Luc", "Ma Lop");
	printf("\n");
	inSinhVien(sv1);
	return 0;
}
