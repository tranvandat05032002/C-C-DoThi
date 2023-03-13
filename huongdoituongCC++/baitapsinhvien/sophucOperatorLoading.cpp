#include<bits/stdc++.h>
using namespace std;

class SoPhuc{
	private:
		int thuc, ao;
	public:
		friend istream &operator >> (istream &is, SoPhuc &a);
		friend ostream &operator << (ostream &os, SoPhuc a);
		
//		SoPhuc operator +(SoPhuc another);
//		SoPhuc operator - (SoPhuc another);
		friend SoPhuc operator + (SoPhuc a, SoPhuc b);
		friend SoPhuc operator - (SoPhuc a, SoPhuc b);
		
		bool operator == (SoPhuc another);
};

istream &operator >> (istream &is, SoPhuc &a){
	is >> a.thuc >> a.ao;
	return is;
}
ostream &operator << (ostream &os, SoPhuc a){
	cout << a.thuc << " " << a.ao << endl;
}

SoPhuc SoPhuc::operator +(SoPhuc another){
	SoPhuc tong;
	tong.thuc = this -> thuc + another.thuc;
	tong.ao = this -> ao + another.ao;
	return tong;
} 

SoPhuc SoPhuc::operator -(SoPhuc another){
	SoPhuc hieu;
	hieu.thuc = this -> thuc - another.thuc;
	hieu.ao = this -> ao - another.ao;
	return hieu;
}

bool SoPhuc::operator ==(SoPhuc another){
	return this -> thuc == another.thuc && this -> ao == another.ao;
}
// operator loading friend 

SoPhuc operator + (SoPhuc a, SoPhuc b){
	SoPhuc tong;
	tong.thuc = a.thuc + b.thuc;
	tong.ao = a.ao + b.ao;
	return tong;
}
SoPhuc operator - (SoPhuc a, SoPhuc b){
	SoPhuc hieu;
	hieu.thuc = a.thuc - b.thuc;
	hieu.ao = a.ao - b.ao;
	return hieu;
}

int main(int argc, char** argv) {
	SoPhuc a, b;
	cin >> a >> b;
	SoPhuc tong = a + b;
	SoPhuc hieu = a - b;
	cout << tong;
	cout << hieu;
	if(a == b) cout << "YES";
	else cout << "NO";
	return 0;
}
