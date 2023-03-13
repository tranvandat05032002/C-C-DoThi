#include<bits/stdc++.h>
using namespace std;

class MonHoc{ //P
	public:
		string TenMH;
		float Diem;
		MonHoc *Next;
};

class HocVien{ //F
	public:
		string HoTen;
		HocVien *Down;
		MonHoc *DsMon;
		// chua danh sach mon hoc co kieu du lieu la MonHoc
};
//tim hoc vien theo ten
HocVien* TimHV(HocVien *&f, string outerName){
	while(f != nullptr){
		if(f -> HoTen == outerName){
			return f;
		}
		f = f -> Down;
	}
	return nullptr;
}
//tim monhoc theo subject
MonHoc* TimMH(MonHoc *&p, string outerSubject){
	while(p != nullptr){
		if(p -> TenMH == outerSubject){
			return p;
		}
		p = p -> Next;
	}
	return nullptr;
}

void insertToListSorted(HocVien *&f, string initName){
	HocVien *p = new HocVien();
	p -> HoTen = initName;
	if(f == nullptr){
		f = p;
		return;
	}
	if(f -> HoTen > initName){
		p -> Down = f;
		f = p;
		return;
	}
	HocVien *tmp = f;
	while(tmp -> Down != nullptr && tmp -> Down -> HoTen < initName){
		tmp = tmp -> Down;
	}
	p -> Down = tmp -> Down;
	tmp = p;
}
//BoSung
void BoSung(HocVien *&f, string externalName, string externalSubject){
	HocVien *hv = f;
	while(hv != nullptr){
		if(hv -> HoTen == externalName){
			//hoc vien co trong danh sach
			// va bo sung them mon hoc
			MonHoc *mh = hv -> DsMon;
			while(mh != nullptr){
				if(mh -> TenMH == externalSubject){
					//mon hoc co trong danh sach
					// khong lam gi ca
					return;
				}
				mh = mh -> Next;
			}
			//chua co mon hoc them vao cuoi
			MonHoc *newMonHoc = new MonHoc;
			newMonHoc -> TenMH = externalSubject;
			newMonHoc -> Diem = 0;
			newMonHoc -> Next = nullptr;
			
			if(hv -> DsMon == nullptr){
				//chua co mon hoc thi tao moi
				hv -> DsMon = newMonHoc;
			}
			else{
				//them cuoi
				MonHoc *tmp = hv -> DsMon;
				while(tmp -> Next != nullptr){
					tmp = tmp -> Next;
				}
				tmp -> Next = newMonHoc;
			}
			return;
		}
		hv = hv -> Down;
	}
// Hoc vien chua co trong danh sach -> tao moi
	HocVien *newHocVien = new HocVien;
	newHocVien -> HoTen = externalName;
	newHocVien -> DsMon = new MonHoc;
	newHocVien -> DsMon -> TenMH = externalSubject;
	newHocvien -> DsMon -> Diem = 0;
	newHocVien -> DsMon -> Next = nullptr;
	newHocVien -> Down = nullptr;	
	if(f == nullptr){
		f = newHocVien;
	}
	else{
		// Tim vi tri chen tang dan theo ten
		HocVien *p = f;
		HocVien *tmp = nullptr;
		while(p != nullptr && p -> HoTen < externalName){
			tmp = p;
			p = p -> Down;
		}
		if(tmp == nullptr){
			newHocVien -> Down = f;
			f = newHocVien;
		}
		else{
			newHocVien -> Down = tmp -> Down;
			tmp -> Down = newHocVien;
		}
	}
}
int main(int argc, char** argv) {
    HocVien* F = nullptr;
	insertToListSorted(F, "Nguyen Van A");
	insertToListSorted(F, "Le Thi B");
	insertToListSorted(F, "Tran Van C");
    HocVien* p = TimHV(F, "Le Thi B");
    if (p != nullptr)
    {
        cout << "Tim thay hoc vien co ten la " << p->HoTen << endl;
    }
    else
    {
        cout << "Khong tim thay hoc vien" << endl;
    }

    // Gi?i phóng b? nh?
    delete F->Down->Down;
    delete F->Down;
    delete F;

    return 0;
}
