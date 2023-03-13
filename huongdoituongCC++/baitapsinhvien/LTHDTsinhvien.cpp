#include<bits/stdc++.h>
using namespace std;

#define a() a
class SinhVien{
	private:
		string id, name, lop, ngaysinh;
		float gpa;
	public:
		SinhVien(){
			id = name = lop = ngaysinh = "";
			gpa = 0;
		}
		
		SinhVien(string name, string lop, string ngaysinh, float gpa){
			this -> name = name;
			this -> lop = lop;
			this -> ngaysinh = ngaysinh;
			this -> gpa = gpa;
		}
		
		friend void nhap(SinhVien&);
		friend void xuat(SinhVien );
};

void nhap(SinhVien &a){
	a.id = "B20DCCN001";
	getline(cin, a.name);
	cin >> a.lop >> a.ngaysinh >> a.gpa;
	if(a.ngaysinh[2] != '/'){
		a.ngaysinh = a.ngaysinh.insert(0, "0");
	}
	if(a.ngaysinh[5] != '/'){
		a.ngaysinh = a.ngaysinh.insert(3, "0");
	}
}
void xuat(SinhVien a){
	cout << a.id << " " << a.name << " " << a.lop << " " << a.ngaysinh << " " << fixed << setprecision(2) << a.gpa << endl;
}


int main(int argc, char** argv) {
	SinhVien a();
	nhap(a);
	xuat(a);
	return 0;
}
