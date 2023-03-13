#include<bits/stdc++.h>
using namespace std;

const int _luongcoban = 1500000;

class LaoDong{
	private:
		string manv, hoten, ngaysinh, loaiHD;
	public:
	LaoDong(){}	
	LaoDong(string manv, string hoten, string ngaysinh, string loaiHD){
		this -> manv = manv;
		this -> hoten = hoten;
		this -> ngaysinh = ngaysinh;
		this -> loaiHD = loaiHD;
	}
	friend istream &operator >> (istream& is, LaoDong&);
	friend ostream &operator << (ostream& os, LaoDong&);
	virtual int TinhLuong(){
		return 0;
	}
	string get_Ten(){
		string ten = "";
		for(int i = 0; i < hoten.size(); i++){
			ten += hoten[i];
			if(hoten[i] == ' ') ten.clear();
		}
		return ten;
	}
	string get_LoaiHopDong(){
		return loaiHD;
	}
	virtual void input(){
		cout << "Nhap ma nhan vien: "; cin >> manv;
		cin.ignore();
		cout << "Nhap hoten nhan vien: "; getline(cin, hoten);
		cout << "Nhap ngay sinh nhan vien: "; cin >> ngaysinh;
		cout << "Nhap loai hop dong: ";  cin >> loaiHD;
	}
	virtual void output(){
		cout << manv << ", ";
		cout << hoten << ", ";
		cout << ngaysinh << ", ";
		cout << loaiHD << ", ";
	}
	bool operator >(LaoDong another){
		return get_Ten() > another.get_Ten();
	}
};
class LaoDong_ThoiVu : public LaoDong{
	private:
		int songaycong, tienluongngaycong;
	public:
		LaoDong_ThoiVu(){}
		LaoDong_ThoiVu(
			string manv, 
			string hoten, 
			string ngaysinh, 
			string loaiHD, 
			int songaycong, 
			int tienluongngaycong
		) : LaoDong(manv, hoten, ngaysinh, loaiHD){
			this -> songaycong = songaycong;
			this -> tienluongngaycong = tienluongngaycong;
		}
		void input(){
			LaoDong::input();
			cout << "Nhap songaycong: "; cin >> songaycong;
			cout << "Nhap tienluognngaycong: "; cin >> tienluongngaycong;
		}
		int TinhLuong(){
			return songaycong * tienluongngaycong + (songaycong >= 25 ? 1000000 : 0);
		}
		void output(){
			LaoDong::output();
			cout << songaycong << ", ";
			cout << tienluongngaycong << ", ";
			cout << endl;
		}
};
class NV_Chinhthuc : public LaoDong{
	private:
		float hsluong;
		string chucvu;
	public:
		NV_Chinhthuc(){
		}
		NV_Chinhthuc(	
			string manv, 
			string hoten, 
			string ngaysinh, 
			string loaiHD, 
			float hsluong,
			string chucvu
		) : LaoDong(manv, hoten, ngaysinh, loaiHD){
			this -> hsluong = hsluong;
			this -> chucvu = chucvu;
		}
		void input(){
			LaoDong::input();
			cin.ignore();
			cout << "Nhap hsluong: "; cin >> hsluong;
			cin.ignore();
			cout << "Nhap chucvu: "; getline(cin, chucvu);
		}
		int TinhLuong(){
			if(chucvu == "nhan vien"){
				return hsluong * _luongcoban + 500000;
			}
			else if(chucvu == "pho phong"){
				return hsluong * _luongcoban + 7000000;
			}
			else{
				return hsluong * _luongcoban + 10000000;
			}
		}
		void output(){
			LaoDong::output();
			cout << hsluong * 100 << "%, ";
			cout << chucvu << ", ";
			cout << TinhLuong() << "vnd\n";
		}
};
void drawFrame() {
    cout << "\n" << char(218) << string(29, char(196)) << " Menu " << string(29, char(196)) << char(191) << "\n";
    cout << char(179) << " 1. Nhap lao dong thoi vu                                       " << char(179) << "\n";
    cout << char(179) << " 2. Nhap lao dong chinh thuc                                    " << char(179) << "\n";
    cout << char(179) << " 3. Xuat thong tin tat ca cac lao dong trong cong ty            " << char(179) << "\n";
    cout << char(179) << " 4. Thong ke cac lao dong theo tung loai hop dong               " << char(179) << "\n";
    cout << char(179) << " 5. Sap xep danh sach lao dong theo ten                         " << char(179) << "\n";
    cout << char(179) << " 6. Thoat                                                       " << char(179) << "\n";
    cout << char(192) << string(64, char(196)) << char(217) << "\n\n";
}
int main(){
	int solaodong = 0, LDTV = 0, LDNV = 0;
	LaoDong* in[100];
	while(true){
		drawFrame();
        
        cout << "Nhap so de chon : ";
        int select;
		cin >> select;
		switch(select){
			case 1:
				in[solaodong] = new LaoDong_ThoiVu();
				in[solaodong] -> input();
				solaodong++;
				LDTV++;
				break;
			case 2:
				in[solaodong] = new NV_Chinhthuc();
				in[solaodong] -> input();
				solaodong++;
				LDNV++;
				break;
			case 3:
				cout << "\n Danh sach tat ca lao dong trong cong ty: \n";
				for(int i = 0; i < solaodong; i++){
					cout << i + 1 << ".";
					in[i] -> output();
				}
				break;
			case 4:
				cout << "\nSo lao dong thoi vu trong cong ty: " << LDTV << "\n";
                cout << "So nhan vien chinh thuc trong cong ty: " << LDNV << "\n";
                break;
            case 5:
            	for(int i = 0; i < solaodong; i++){
            		for(int j = 1; j < solaodong; j++){
            			if(*in[j - 1] > *in[j]){
            				LaoDong* tmp = in[j - 1];
            				in[j - 1] = in[j];
            				in[j] = tmp;
						}
					}
				}
				break;
            default:
            	return 0;
            	break;
		}		
	}
	return 0;
}
