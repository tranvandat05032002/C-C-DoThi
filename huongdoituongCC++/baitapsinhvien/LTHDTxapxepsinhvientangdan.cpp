#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string id, name, lop, email;
	public:
		SinhVien(){
			id = name = lop = email = "";
		}
		
		friend istream &operator >> (istream &is, SinhVien&);
		friend ostream &operator << (ostream &os, SinhVien);
		
		friend bool operator < (SinhVien a, SinhVien b);
		
};


istream &operator >> (istream &is, SinhVien &a){
	is >> a.id;
	is.ignore();
	getline(is, a.name);
	is >> a.lop  >> a.email;
//	if(a.ngaysinh[2] != '/') a.ngaysinh = a.ngaysinh = a.ngaysinh.insert(0, "0");
//	if(a.ngaysinh[5] != '/') a.ngaysinh = a.ngaysinh.insert(3, "0");
}
ostream &operator << (ostream &os, SinhVien a){
	os << a.id << " " << a.name << " " << a.lop << " " << a.email << endl;
	return os;
}

bool operator < (SinhVien a, SinhVien b){
	return a.lop < b.lop;
}
int main(int argc, char** argv) {
	int n;
	cin >> n;
	SinhVien a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}	
	sort(a, a + n);
	for(SinhVien x : a){
		cout << x;
	}
	return 0;
}


