#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

class Person{
	private:
		string TenDem, Ten;
		int ngay, thang, nam;
	public:
		Person();
		Person(string TenDem, string Ten, int ngay, int thang, int nam);

		//friend
//		friend istream &operator >>(istream &is, Person&a);
//		friend ostream &operator <<(ostream &os, Person a);
		
		void NhapPerson();
		void PrintPerson();
		
		friend bool operator >(Person a, Person b);
};
Person::Person(){
	TenDem = Ten = "";
	ngay = thang = nam = 0;
}
Person::Person(string TenDem, string Ten, int ngay, int thang, int nam){
	this -> TenDem = TenDem;
	this -> Ten = Ten;
	this -> ngay = ngay;
	this -> thang = thang;
	this -> nam = nam;
}	
void Person::NhapPerson(){
	cout << "Nhap Ten Dem: ";
	getline(cin, TenDem);
	cout << endl;
	cout << "Nhap Ten: ";
	getline(cin, Ten);
	cout << endl;
	cout << "Nhap Ngay, Thang, Nam Sinh: ";
	cin >> ngay >>thang >> nam;
}

void Person::PrintPerson(){
	cout << TenDem << " " << Ten << " " << ngay << "/" << thang << "/" <<nam << " ";
}

bool operator > (Person a, Person b){
	if(a.Ten > b.Ten){
		return a.Ten > b.Ten;
	}
	else if(a.Ten == b.Ten){
		return a.TenDem > b.TenDem;
	}
}

//class SinhVien
class Sinhvien : public Person{
	private:
		string MaSinhVien;
		float GPA;
	public:
		Sinhvien();
		Sinhvien(string TenDem, string Ten, int ngay, int thang, int nam, string MaSinhVien, float GPA);
		
		string getMaSinhVien();
		float getGPA();
		
		void NhapSinhVien();
		void PrintSinhVien();
		void PrintDataClassSinhVien();
};
Sinhvien::Sinhvien() : Person(){
	MaSinhVien = "";
	GPA = 0;
}
Sinhvien::Sinhvien(string TenDem, string Ten, int ngay, int thang, int nam, string MaSinhVien, float GPA) : Person(TenDem, Ten, ngay, thang, nam){
	this -> MaSinhVien = MaSinhVien;
	this -> GPA = GPA;
}
void Sinhvien::NhapSinhVien(){
	cout << "Nhap Ma Sinh Vien: ";
	getline(cin, MaSinhVien);
	cout << endl;
	Person::NhapPerson();
	cin.ignore();
	cout << "Nhap GPA: ";
	cin >> GPA;
	cin.ignore();
	cout << endl;
}
void Sinhvien::PrintSinhVien(){
	cout << MaSinhVien << " ";
	Person::PrintPerson();
	cout << GPA;
	cout << endl;
}
string Sinhvien::getMaSinhVien(){
	return this -> MaSinhVien;
}
float Sinhvien::getGPA(){
	return this -> GPA;
}
void Sinhvien::PrintDataClassSinhVien(){
	cout << "Du Lieu Cua Cac Thuoc Tinh: " << endl << "MaSinhVien: " << MaSinhVien << endl << "GPA: " << GPA;
}
int main(int argc, char** argv) {
	int n;
	cin >> n;
	cin.ignore();
	Sinhvien sv[n];
	vector<Sinhvien>svMax;
	int in[n];
	for(int i = 0; i < n ; i++){
		sv[i].NhapSinhVien();
	}
	//sort
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(sv[i] > sv[j]){
				std::swap(sv[i], sv[j]);
			}
		}
	}
	cout << "Danh Sach Sinh Vien Sau Khi Sap Xep: " << endl;
	for(int i = 0; i < n; i++){
		sv[i].PrintSinhVien();
	}
	// xu ly sinh vien Max
	float max = sv[0].getGPA();
	int index = 0;
	for(int i = 0; i < n; i++){
		if(sv[i].getGPA() > max){
			max = sv[i].getGPA();
		}
	}
	for(int i = 0; i < n; i++){
		if(sv[i].getGPA() == max){
			svMax.push_back(sv[i]);
		}
	}
	cout << "Danh Sach Sinh Vien Diem Cao Nhat: " << endl;
	for(Sinhvien it : svMax){
		it.PrintSinhVien();
	}
	return 0;
}
