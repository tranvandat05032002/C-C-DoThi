#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string id, name, lop, ngaysinh;
		float gpa;
	public:
		SinhVien(){
			id = name = lop = ngaysinh = "";
			gpa = 0;
		}
		
		friend istream &operator >> (istream &is, SinhVien&);
		friend ostream &operator << (ostream &os, SinhVien);
		
};

istream &operator >> (istream &is, SinhVien &a){
	a.id = "B20DCCN001";
	getline(is, a.name);
	is >> a.lop >> a.ngaysinh >> a.gpa;
	
	if(a.ngaysinh[2] != '/') a.ngaysinh = a.ngaysinh.insert(0, "0");
	if(a.ngaysinh[5] != '/') a.ngaysinh = a.ngaysinh.insert(3, "0");
}
ostream &operator << (ostream &os, SinhVien a){
	os << a.id << " " << a.name << " " << a.lop << " " << a.ngaysinh << " " << a.gpa << endl;
	return os;
}

#define a() a
int main(int argc, char** argv) {
	SinhVien a();
	cin >> a;
	cout << a;
	return 0;
}
