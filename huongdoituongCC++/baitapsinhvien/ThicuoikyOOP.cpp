#include<bits/stdc++.h>
#include<vector>
#include<map>
//#include<stack>
using namespace std;
class ThiSinh{
	private:
		string SBD, HoTen, DiaChi;
		float DiemUuTien;
	public:
		ThiSinh();
		void NhapThiSinh();
		void PrintThiSinh();
		
		string getSBD();
		string getHoTen();
		string getDiaChi();
		float getDiemUuTien();
		
		void setSBD(string newSBD);
		void setHoTen(string newHoTen);
		void setDiaChi(string newDiaChi);
		void setDiemUuTien(float newDiemUuTien);
		
		float TongDiem(float a, float b, float c);	
};
ThiSinh::ThiSinh(){
	SBD = HoTen = DiaChi = "";
	DiemUuTien = 0;
}
void ThiSinh::NhapThiSinh(){
	cout << "Nhap SBD: ";
	cin >> SBD;
	cout << "\nNhap HovaTen: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "\nNhap DiaChi: ";
	getline(cin, DiaChi);
	cout << "\nNhap DiemUuTien: ";
	cin >> DiemUuTien;
}
void ThiSinh::PrintThiSinh(){
	cout << "Thi Sinh: " << SBD << " | " << HoTen << " | " << DiaChi << " | " << DiemUuTien << " | ";
}
float ThiSinh::getDiemUuTien(){
	return this -> DiemUuTien;
}
float ThiSinh::TongDiem(float a, float b, float c){
	return float(a + b + c + DiemUuTien);
}
//-------------------------------------------------------------------------------
//Khoi A
class ThiSinhKhoiA : public ThiSinh{
	private:
		float Toan, Ly, Hoa;
	public:
		ThiSinhKhoiA() : ThiSinh(){
			Toan = Ly = Hoa = 0;
		}
		void NhapThiSinhKhoiA();
		void PrintThiSinhKhoiA();
		
		float getToan();
		float getLy();
		float getHoa();
		
		void setToan(float newToan);
		void setLy(float newLy);
		void setHoa(float newHoa);
		
		float TongDiem();
};
void ThiSinhKhoiA::NhapThiSinhKhoiA(){
	ThiSinh::NhapThiSinh();
	cout << endl;
	cout << "Nhap Diem Toan: ";
	cin >> Toan;
	cout << endl;
	cout << "Nhap Diem Ly: ";
	cin >> Ly;
	cout << endl;
	cout << "Nhap Diem Hoa: ";
	cin >> Hoa;
}
void ThiSinhKhoiA::PrintThiSinhKhoiA(){
	ThiSinh::PrintThiSinh();
	cout << " " << "Toan: " << Toan << " | " << "Ly: " << Ly << " | " << "Hoa: " << Hoa << " | " << endl;
}
float ThiSinhKhoiA::TongDiem(){
	return ThiSinh::TongDiem(Toan, Ly, Hoa);
}
float ThiSinhKhoiA::getToan(){
	return this -> Toan;
}
float ThiSinhKhoiA::getLy(){
	return this -> Ly;
}
float ThiSinhKhoiA::getHoa(){
	return this -> Hoa;
}
void ThiSinhKhoiA::setToan(float newToan){
	this -> Toan = newToan;
}
void ThiSinhKhoiA::setLy(float newLy){
	this -> Ly = newLy;
}
void ThiSinhKhoiA::setHoa(float newHoa){
	this -> Hoa = newHoa;
}
//-------------------------------------------------------------------------------
//Khoi B
class ThiSinhKhoiB : public ThiSinh{
	private:
		float Toan, Hoa, Sinh;
	public:
		ThiSinhKhoiB() : ThiSinh(){
			Toan = Hoa = Sinh = 0;
		}
		void NhapThiSinhKhoiB();
		void PrintThiSinhKhoiB();
		
		float getToan();
		float getHoa();
		float getSinh();
		
		void setToan(float newToan);
		void setHoa(float newHoa);
		void setSinh(float newSinh);
		
		float TongDiem();
};
void ThiSinhKhoiB::NhapThiSinhKhoiB(){
	ThiSinh::NhapThiSinh();
	cout << endl;
	cout << "Nhap Diem Toan: ";
	cin >> Toan;
	cout << endl;
	cout << "Nhap Diem Hoa: ";
	cin >> Hoa;
	cout << endl;
	cout << "Nhap Diem Sinh: ";
	cin >> Sinh;
}
void ThiSinhKhoiB::PrintThiSinhKhoiB(){
	ThiSinh::PrintThiSinh();
	cout << " " << "Toan: " << Toan << " | " << "Hoa: " << Hoa << " | " << "Sinh: " << Sinh << " | " << endl;
}

float ThiSinhKhoiB::getToan(){
	return this -> Toan;
}
float ThiSinhKhoiB::getHoa(){
	return this -> Hoa;
}
float ThiSinhKhoiB::getSinh(){
	return this -> Sinh;
}
void ThiSinhKhoiB::setToan(float newToan){
	this -> Toan = newToan;
}
void ThiSinhKhoiB::setHoa(float newHoa){
	this -> Hoa = newHoa;
}
void ThiSinhKhoiB::setSinh(float newSinh){
	this -> Sinh = newSinh;
}
float ThiSinhKhoiB::TongDiem(){
	return ThiSinh::TongDiem(Toan, Hoa, Sinh);
}

//-------------------------------------------------------------------------------
//Khoi C
class ThiSinhKhoiC : public ThiSinh{
	private:
		float Van, Su, Dia;
	public:
		ThiSinhKhoiC() : ThiSinh(){
			Van = Su = Dia = 0;
		}
		void NhapThiSinhKhoiC();
		void PrintThiSinhKhoiC();
		
		float getVan();
		float getSu();
		float getDia();
		
		void setVan(float newVan);
		void setSu(float newSu);
		void setDia(float newDia);
		
		float TongDiem();
};
void ThiSinhKhoiC::NhapThiSinhKhoiC(){
	ThiSinh::NhapThiSinh();
	cout << endl;
	cout << "Nhap Diem Van: ";
	cin >> Van;
	cout << endl;
	cout << "Nhap Diem Su: ";
	cin >> Su;
	cout << endl;
	cout << "Nhap Diem Dia: ";
	cin >> Dia;
}
void ThiSinhKhoiC::PrintThiSinhKhoiC(){
	ThiSinh::PrintThiSinh();
	cout << " " <<"Van: " << Van << " | " << "Su: " << Su << " | " << "Dia: " << Dia << " | " << endl;
}
float ThiSinhKhoiC::getVan(){
	return this -> Van;
}
float ThiSinhKhoiC::getSu(){
	return this -> Su;
}
float ThiSinhKhoiC::getDia(){
	return this -> Dia;
}
void ThiSinhKhoiC::setVan(float newVan){
	this -> Van = newVan;
}
void ThiSinhKhoiC::setSu(float newSu){
	this -> Su = newSu;
}
void ThiSinhKhoiC::setDia(float newDia){
	this -> Dia = newDia;
}
float ThiSinhKhoiC::TongDiem(){
	return ThiSinh::TongDiem(Van, Su, Dia);
}

class Student{
	private:
		vector<ThiSinh>ALL;
		vector<ThiSinhKhoiA>KA;
		vector<ThiSinhKhoiB>KB;
		vector<ThiSinhKhoiC>KC;
		int a, b, c;
	public:
		void NhapStudent();
		void PrintStudentALL();
		void PrintStudentK();
		void PrintStudentDauTheoKhoi();
};
void Student::NhapStudent(){
	cout << "Nhap so luong sinh vien Khoi A: ";
	cin >> a;
	cout << "Nhap so luong sinh vien khoi B: ";
	cin >> b;
	cout << "Nhap so luong sinh vien khoi C: ";
	cin >> c;
	for(int i = 0; i < a; i++){
		ThiSinhKhoiA s;
		s.NhapThiSinhKhoiA();
		ALL.push_back(s);
		this -> KA.push_back(s);
	}
	for(int i = 0; i < b; i++){
		ThiSinhKhoiB s;
		s.NhapThiSinhKhoiB();
		ALL.push_back(s);
		this -> KB.push_back(s);
	}
	for(int i = 0; i < c; i++){
		ThiSinhKhoiC s;
		s.NhapThiSinhKhoiC();
		ALL.push_back(s);
		this -> KC.push_back(s);
	}
}
void Student::PrintStudentALL(){
	for(int i = 0; i < this -> ALL.size(); i++){
		this -> ALL[i].PrintThiSinh();
		cout << endl;
	}
}
void Student::PrintStudentK(){
	cout << "Cac thi sinh khoi A: "<< endl;
	for(int i = 0; i < this -> KA.size(); i++){
		this -> KA[i].PrintThiSinhKhoiA();
		cout << endl;
	}
	cout << "Cac thi sinh khoi B: " <<endl;
	for(int i = 0; i < this -> KB.size(); i++){
		this -> KB[i].PrintThiSinhKhoiB();
		cout <<endl;
	}
	cout << "Cac thi sinh khoi C: " <<endl;
	for(int i = 0; i < this -> KC.size(); i++){
		this -> KC[i].PrintThiSinhKhoiC();
		cout << endl;
	}
}
void Student::PrintStudentDauTheoKhoi(){
	for(int i = 0; i < this -> KA.size(); i++){
		if(KA[i].TongDiem() >= 19){
			this -> KA[i].PrintThiSinhKhoiA();
			cout << endl;
		}
	}
	for(int i = 0; i < this -> KB.size(); i++){
		if(KB[i].TongDiem() >= 25){
			this -> KB[i].PrintThiSinhKhoiB();
			cout << endl;
		}
	}
	for(int i = 0; i < this -> KC.size(); i++){
		if(KC[i].TongDiem() >= 18){
			this -> KC[i].PrintThiSinhKhoiC();
			cout << endl;
		}
	}
}
//Tat Ca Sinh Vien Cac Khoi
int main(int argc, char** argv) {
	Student s;
	while(1){
		int select;
		cout << "-----------------MENU----------------" << endl;
		cout << "-------------------------------------" << endl;
		cout << "1: Nhap Thi Sinh." << endl;
		cout << "2: In tat ca thi sinh." << endl;
		cout << "3: In tat ca thi sinh theo khoi." << endl;
		cout << "4: In tat ca thi sinh dau theo khoi." << endl;
		cout << "5. Dung chuong trinh Va EXIT." << endl;
		cout << "-------------------------------------" << endl;
		cout << "Nhap lua chon cua ban: ";
		cin >> select;
		switch(select){
			case 1:{
				s.NhapStudent();
				break;
			}
			case 2:{
				cout << endl;
				cout << "Tat ca thi sinh da nhap: " << endl;
				s.PrintStudentALL();
				cout << endl;
				break;
			}
			case 3:{
				cout << endl;
				cout << "In tat ca thi sinh theo khoi: " <<endl;
				s.PrintStudentK();
				cout << endl;
				break;
			}
			case 4:{
				cout << endl;
				cout << "In tat ca thi sinh dau theo khoi: " << endl;
				s.PrintStudentDauTheoKhoi();
				cout << endl;
				break;
			}
			case 5:{
				return false;
			}
			default:
				cout << endl;
				cout << "Khong co trong menu. xin vui long nhap lai!" << endl;
				cout << endl;
				break;
		}
	}
	return 0;
}
