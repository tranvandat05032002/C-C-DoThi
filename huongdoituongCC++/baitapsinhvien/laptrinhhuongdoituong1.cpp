#include<bits/stdc++.h>
using namespace std;
 /*class: lop
thuoctinh: attribute
phuong thu: method, behavior
object: Doi tuong
 constructor
 desconstructor: ~class
-Encapsulation: dong goi
Access modifier
- private
- public
-protected

con tro this
getter va setter de truy cap vao private
frinend function

friend class
forward declaration


operator overloading
<< >> 
cout: ostream
cin: istream

*/

class sinhvien;
class giaovien;

class sinhvien{
	friend class giaovien;
	private:
		string name, id, born;
		double gpa;
		static int dem;
	public:
		sinhvien();
		sinhvien(string, string, string, double);
		void xinchao();
		void dihoc();
		void nhap();
		void xuat();
		double getterGpa();
		string getterName();
		string getterId();
		string getterborn();
		
		void getterTangDemInStatic();
		int getterStatic();
		void setterGpa(double);
		~sinhvien();
		
		friend void chuanhoaName(sinhvien&);
		
// nap chong toan tu istream and ostream in operator

		friend istream &operator >> (istream &is, sinhvien &a);
		friend ostream &operator << (ostream &os, sinhvien a);
		//so sanh 2 sinh vien
		//c1 xay dung operator be hon
		
//		bool operator < (sinhvien a);
		
		//c2 xay dung operator overloading
		
		friend bool operator < (sinhvien a, sinhvien b);		
		
};

// class giaovien and sinhvien's friend
class giaovien{
	private:
		string khoa;
	public:
		void updateGPA(sinhvien&);
};

void giaovien::updateGPA(sinhvien &a){
	a.gpa = 3.12;
}
//constuctor
sinhvien::sinhvien(){
	this -> name = this -> id = this -> born = "";
	this -> gpa = 0;
}
sinhvien::sinhvien(string name, string id, string born, double gpa){
	cout << "doi tuong duoc tao nhieu tai day!";
	this -> name = name;
	this -> id = id;
	this -> born = born;
	this -> gpa = gpa;
}
sinhvien::~sinhvien(){
//	cout << "doituongnhieudabihuy" << endl;
}
int sinhvien::dem = 0;

void sinhvien::getterTangDemInStatic(){
	dem++;
}
//Implementation
void sinhvien::nhap(){
	dem++;
	this -> id = "SV" + string(3 - to_string(dem).length(), '0') + to_string(dem);
//	cout << "nhap id:"; cin >> this -> id;
	cout << "nhap name:"; getline(cin, this -> name);
	cout << "ngay sinh:"; cin >> this -> born;
	cout << "gpa:"; cin >> this -> gpa;
	cin.ignore();
}

void sinhvien::xuat(){
	cout << this -> id << " " << this -> name << " " << this -> born << " " << fixed << setprecision(2) << this -> gpa << endl;
}

void sinhvien::xinchao(){
	cout << "Xin chao cac ban" << endl;
}
void sinhvien::dihoc(){
	cout << "chuc cac ban di hoc vui ve" << endl;
}
// getter
double sinhvien::getterGpa(){
	return this -> gpa;
}

int sinhvien::getterStatic(){
	return dem;
}
//setter
void sinhvien::setterGpa(double gpa){
	this -> gpa = gpa;
}
bool cmp(sinhvien a, sinhvien b){
	return a.getterGpa() > b.getterGpa();
}

// friend function	
void chuanhoaName(sinhvien &a){
	string res = "";
	stringstream ss(a.name);
	string token;
	while(ss >> token){
		res += toupper(token[0]);
		for(int i = 1; i < token.length(); i++){
			res += tolower(token[i]);
		}
		res += " ";
	}
	
	res.erase(res.length() - 1);
	a.name = res;
}


// build funtion istream and ostream
istream &operator >> (istream &is, sinhvien &a){
	cout << "nhap id: ";
	is >> a.id;
	cout << "nhap name: ";
	is.ignore();
	getline(is, a.name);
	cout << "nhap born: ";
	is >> a.born;
	cout << "nhap GPA: ";
	is >> a.gpa;
	return is;
}
ostream &operator << (ostream &os, sinhvien a){
	os << a.id << " " << a.name << " " << a.born << " " << fixed << setprecision(2) << a.gpa << endl;
}

// so sanh gpa 2 sinh vien

//bool sinhvien::operator <(sinhvien a){
//	return this -> gpa < a.gpa;
//}

bool operator < (sinhvien a, sinhvien b){
	return a.gpa < b.gpa;
}

int main(int argc, char** argv) {
//	int n;
//	cin >> n;	
//	sinhvien x[100];
//	for(int i = 0; i < n; i++){
//		x[i].nhap();
//		sort(x, x + n, cmp);
//	}
//	for(int i = 0; i < n; i++){
//		x[i].xuat();
//	}
//	sinhvien a;
//	a.nhap();
//	a.setterGpa(2.18);
//	a.xuat();
//	// gan sinh vien
//	
//	sinhvien b;
//	b.nhap();
//	sinhvien z = b;
//	z.xuat();
	
//	sinhvien m;
//	m.nhap();
//	chuanhoaName(m);
//	giaovien n;
//	n.updateGPA(m);
//	m.xuat();


// operator overloading
	int n;
	cin >> n;
	sinhvien in[n];
	for(int i = 0; i < n; i++){
		cin >> in[i];
	}
	sort(in, in + n);
	for(sinhvien x : in){
		cout << x;
	}
	return 0;
}
