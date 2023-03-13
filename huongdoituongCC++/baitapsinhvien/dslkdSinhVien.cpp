#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string mssv, ten;
		float diem;
	public:
		SinhVien(){
			mssv = ten = "";
			diem = 0;
		}
		void nhap(){
			cin >> this.mssv;
			getline(cin, this.ten);
			cin >> this.diem;
		}
		void xuat(){
			cout << this.mssv << " " << this.ten << " " << this.diem;
		}
};
struct Node{
	Node* next;
};
