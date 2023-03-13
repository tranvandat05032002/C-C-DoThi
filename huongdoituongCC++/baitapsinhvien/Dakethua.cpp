#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class MyAtt{
	private:
		int Att;
	public:
		MyAtt(int Att);
		void xuat();
		int getAtt();
};
MyAtt::MyAtt(int Att){
	this -> Att = Att;
}
void MyAtt::xuat(){
	cout << Att << " | ";
}
int MyAtt::getAtt(){
	return this -> Att;
}

class MyDate{
	private:
		string date;
	public:
		MyDate(string date);
		void xuat();
		string getDate();
		bool operator > (MyDate another);
};
void MyDate::xuat(){
	cout << date << " | ";
}
MyDate::MyDate(string date){
	this -> date = date;
}
string MyDate::getDate(){
	return this -> date;
}
bool MyDate::operator > (MyDate another){
	string date1 = date.substr(6, 4) + date.substr(3, 2) + date.substr(0, 2);
	string date2 = another.date.substr(6, 4) + another.date.substr(3, 2) + another.date.substr(0, 2);
	return (date1 > date2);
}
class MyFile : public MyAtt, public MyDate{
	private:
		string fileName;
		int fileSize;
	public:
		MyFile(int fileSize, string date, string fileName, int Att):MyDate(date), MyAtt(Att){
			this -> fileName = fileName;
			this -> fileSize = fileSize;
		};
		void xuat();
};
void MyFile::xuat(){
	cout << fileSize << " | ";
	MyDate::xuat();
	cout << fileName << " | ";
	MyAtt::xuat();
	cout << endl;
}
int main(int argc, char** argv) {
	MyFile *in[4];
	int att, fileSize;
	string date, fileName;
	for(int i = 1; i <= 4; i++){
		cout << "Doi tuong thu: " << i << endl;
		cout << "Nhap fileSize: ";
		cin >> fileSize;
		cin.ignore();
		cout << "Nhap Date: ";
		getline(cin, date);
		cout << "Nhap fileName: ";
		getline(cin, fileName);
		cout << "Nhap Att(So hieu): ";
		cin >> att;
		cin.ignore();
		in[i] = new MyFile(fileSize, date, fileName, att);
	}
	cout << "Danh sach thong tin tep truoc khi xap xep: " << endl;
	for(int i = 1; i <= 4; i++){
		cout << "Tep thu: " << i;
		in[i] -> xuat();
	}
	for(int i = 1; i <= 3; i++){
		for(int j = i + 1; j <= 4; j ++){
			if(*in[i] > *in[j]){
				std::swap(in[i], in[j]);
			}
		}
	}
	cout << "Danh sach tep sau khi xap xep: " << endl;
	for(int i = 1; i <= 4; i++){
		in[i] -> xuat();
	}
	return 0;
}
