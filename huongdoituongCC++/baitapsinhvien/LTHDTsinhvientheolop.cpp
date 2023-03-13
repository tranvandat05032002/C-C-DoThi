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
		
		string getlop(){
			return this -> lop;
		}
};


istream &operator >> (istream &is, SinhVien &a){
	is >> a.id;
	is.ignore();
	getline(is, a.name);
	is >> a.lop  >> a.email;
}
ostream &operator << (ostream &os, SinhVien a){
	os << a.id << " " << a.name << " " << a.lop << " " << a.email << endl;
	return os;
}

bool operator < (SinhVien a, SinhVien b){
	return a.lop < b.lop;
}
int main(int argc, char** argv) {
/*	int n;
	cin >> n;
	SinhVien a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int q;
	cin >> q;
	while(q--){
		string searchLop;
		cin >> searchLop;
		cout << "Danh Sach Sinh Vien Theo Lop:" << searchLop << endl;
		
		for(SinhVien x : a){
			if(x.getlop() == searchLop){
				cout << x;
			}
		}
	}
*/
	int n;
	cin >> n;
	map<string, vector<SinhVien>>mp;
	for(int i = 0; i < n; i++){
		SinhVien tmp;
		cin >> tmp;
		mp[tmp.getlop()].push_back(tmp);
	}
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		cout << "Danh Sach Sinh Vien Theo lop: " << s << endl;
		for(SinhVien x : mp[s]){
			cout << x;
		}
	}
	return 0;
}


