#include<bits/stdc++.h>
#include<vector>
typedef long long ll;
using namespace std;

class Student{
	private:
		string name, born, id;
		int age;
		float gpa;
		static int count;
	public:
		//constructor
		Student();
		// static
		void getterCount();
//		// input
//		void input();
//		//output
//		void output();
		
		friend istream &operator >> (istream &is, Student &sv);
		friend ostream &operator << (ostream &os, Student sv);
		
};

Student::Student(){
	this -> name = this -> born = this -> id = "";
	this -> age = this -> gpa = 0;
}

int Student::count = 0;

void Student::getterCount(){
	count++;
}
//void Student::input(){
//	count++;
//	this -> id = "SV" + string(3 - to_string(count).length(), '0') + to_string(count);
//	cout << "Nhap Name: "; getline(cin, this -> name);
//	cout << "Nhap Born: "; cin >> this -> born;
//	cout << "Nhap age: "; cin >> this -> age;
//	cout << "Nhap gpa: "; cin >> this -> gpa;
//}
//void Student::output(){
//	cout << this -> id << " " << this -> name << " " << this -> born << " " << this -> age << " " << this -> gpa << endl;
//}

istream &operator >> (istream &is, Student &sv){
	cout << "Nhap ID: "; is >> sv.id;  
	is.ignore();
	cout << "Nhap Name: "; getline(is, sv.name);
	cout << "Nhap Born: "; is >> sv.born;
	cout << "Nhap Age: "; is >> sv.age;
	cout << "Nhap Gpa: "; is >> sv.gpa;
}
ostream &operator << (ostream &os, Student sv){
	os << sv.id << " " << sv.name << " " << sv.born << " " << sv.age << " " << sv.gpa;
}
int main(){
	int n;
	cin >> n;
	vector <Student> saveSV;
	Student in[n];
	for(int i = 0; i < n; i++){
		cin >> in[i];
//		saveSV.push_back(in[i]);1
	}
//	sort(in, in + n);
	for(Student x : in){
		cout << x;
	}
	
	return 0;
}
