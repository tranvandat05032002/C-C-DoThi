#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string ten, ns, gt;
		double toan, tin, triet;
	public:
		SinhVien();
		SinhVien(string ten, string ns, string gt, double toan, double tin, double triet);
		void Nhap();
		void In();
		double Dtb();
};

SinhVien::SinhVien(){
	this -> ten = "";
	this -> ns = "";
	this -> gt = "";
	this -> toan = 0;
	this -> tin = 0;
	this -> triet = 0;
}

SinhVien::SinhVien(string ten, string ns, string gt, double toan, double tin, double triet){
	this -> ten = ten;
	this -> ns = ns;
	this -> gt = gt;
	this -> toan = toan;
	this -> tin = tin;
	this -> triet = triet;
}

void SinhVien::Nhap(){
	cout << "Nhap ten: ";
	cin.ignore();
	getline(cin, ten);
	cout << "Nhap ngay sinh: ";
	cin >> ns;
	cout << "Nhap gioi tinh: ";
	cin >> gt;
	cout << "Nhap diem toan, tin, triet: ";
	cin >> toan >> tin >> triet;
}

void SinhVien::In(){
	double a = Dtb();
	cout << "	Ho va Ten: " << ten << endl; 
	cout << "	Ngay sinh: " << ns << endl; 
	cout << "	Gioi tinh: " << gt << endl; 
	cout << "	Diem Toan - Tin - Triet: " << toan << " " << tin << " " << triet << endl; 
	cout << "	Diem trung binh: " << setprecision(2) << fixed <<  a << endl;
}

void swap(SinhVien *a, SinhVien *b){
    SinhVien tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}

double SinhVien::Dtb(){
	return 1.0*(toan + tin + triet) / 3;
}

int main(){
	int n;
	double a, b;
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	SinhVien *sv[n];
	for(int i=0; i < n; i++){
		sv[i] = new SinhVien();
		sv[i] -> Nhap();
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(sv[i] -> Dtb() < sv[j] -> Dtb()){
				swap(sv[i], sv[j]);
			}
		}
	}
	cout << endl << "=========== DANH SACH SINH VIEN =================" << endl;
	for(int i=0; i < n; i++){
		cout << "    === Thong tin sinh vien " << i+ 1 << " ===" << endl;
		sv[i] -> In();
		cout << endl;
	}
}
