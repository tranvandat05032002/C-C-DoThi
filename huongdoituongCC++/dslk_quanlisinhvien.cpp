#include<bits/stdc++.h>
using namespace std;

struct Student{
	string name, id;
	float gpa;
};
struct Nodesv{
	Student s;
	Nodesv* next;
};
typedef struct Nodesv* node;
node makeNode(){
	Student s;
	cout << "nhap thong tin sinh vien: \n";
	cout << "Nhap ID:";
	cin >> s.id;
	cout << "nhap Name Sinh Vien:";
	cin.ignore();
	getline(cin, s.name);
	cout << "nhap gpa:";
	cin >> s.gpa;
	node tmp = new Nodesv();
	tmp -> s = s;
	tmp -> next = nullptr;
	return tmp;
}
int size(node &a){
	int count = 0;
	while(a != nullptr){
		count++;
		a = a -> next;
	}
	return count;
}

bool empty(node &a){
	return a == nullptr;
}

void insertFirst(node &a){
	node tmp = makeNode();
	if(a == nullptr){
		a = tmp;
	}
	else{
		tmp -> next = a;
		a = tmp;
	}
}
void insertLast(node &a){
	node tmp = makeNode();
	if(a == nullptr){
		a = tmp;
	}
	else{
		node p = a;
		while(p -> next != nullptr){
			p = p -> next;
		}
		p -> next = tmp;
	}
}

void insertMiddle(node &a, int pos){
	int n = size(a);
	if(pos <= 0 || pos > n + 1){
		insertLast(a);
		return;
	}
	if(pos == 1){
		insertFirst(a);
		return;
	}
	else if(pos == n + 1){
		insertLast(a);
		return;
	}
	else{
		node p = a;
		node tmp = makeNode();
		for(int i = 1; i < pos - 1; i++){
			p = p -> next;
		}
		tmp -> next = p -> next;
		p -> next = tmp;
	}
}

void deleteFirst(node &a){
	if(a == nullptr){
		return;
	}
	a = a -> next;
}

void deleteLast(node &a){
	if(a == nullptr){
		return;
	}
	
	node truoc = nullptr;
	node sau = a;
	while(sau -> next != nullptr){
		truoc = sau;
		sau = sau -> next;
	}
	if(truoc == nullptr){
		a = nullptr;
	}
	else{
		truoc -> next = nullptr;
	}
}

void deleteMiddle(node &a, int pos){
	int n = size(a);
	if(pos <= 0 || pos > n + 1){
		return;
	}
	node truoc = nullptr;
	node sau = a;
	for(int i = 1; i < pos; i++){
		truoc = sau;
		truoc -> next = sau -> next;
	}
	if(truoc == nullptr){
		a = a -> next;
	}
	else{
		truoc -> next = sau -> next;
	}
}

void inttin(Student s){
	cout << "ID:" <<" " << s.id;
	cout << "name: " <<" " <<s.name;
	cout << "gpa:" <<" " << fixed << setprecision(2) << s.gpa;
	cout << endl;
}

void indanhsachsv(node a){
	cout << "in danh sach sinh vien: \n";
	
	while(a != nullptr){
		inttin(a -> s);
		a = a -> next;
	}
	cout << endl;
	cout << "--------------------------------------------------------";
}

//void xapxep(node &a){
//	for(node  p = a; p != nullptr; p = p -> next){
//		node min = p;
//		for(node q = p -> next; q != nullptr; q = q -> next){
//			if(q -> data > min - > data){
//				min = q;
//			}
//		}
//		
//		int tmp = q -> data;
//		q -> data = p -> data;
//		p -> data = tmp;
//	}
//}

void sortSV(node &a){
	Student s;
	for(node p = a; p != nullptr; p = p -> next){
		node min  = p;
		for(node q = p -> next; q != nullptr; q = q -> next){
			if(q -> s.gpa  > min -> s.gpa){
				min = q;
			}
		}
		Student tmp = min -> s;
		min -> s = p -> s;
		p -> s = tmp; 
	}
}

int main(int argc, char** argv) {
	node head = nullptr;
	while(1){
		cout << "------------------------------------------------\n";
		cout << "1. Chen sinh vien vao dau danh sach\n";
		cout << "2. Chen sinh vien vao cuoi danh sach\n";
		cout << "3. Chen sinh vien vao vi tri bat ky danh sach\n";
		cout << "4. xoa sinh vien dau danh sach\n";
		cout << "5. xoa sinh vien cuoi danh sach\n";
		cout << "6. xoa sinh vien vi tri bat ki danh sach\n";
		cout << "7. xap xep sinh vien theo gpa danh sach\n";
		cout << "8. Duyet sinh vien\n";
		cout << "9. Thoat.\n";
		cout << "------------------------------------------------\n";
		cout << "Nhap lua chon:";
		int lc;
		cin >> lc;
		if(lc == 1){
			insertFirst(head);
		}
		else if(lc == 2){
			insertLast(head);
		}
		else if(lc == 3){
			int pos;
			cout << "nhap vi tri pos: ";
			cin >> pos;
			insertMiddle(head,pos);
		}
		else if(lc == 4){
			deleteFirst(head);
		}
		else if(lc == 5){
			deleteLast(head);
		}
		else if(lc == 6){
			int pos;
			cout << "nhap vi tri pos: ";
			cin >> pos;
			deleteMiddle(head, pos);
		}
		else if(lc == 7){
			sortSV(head);
		}
		else if(lc == 8){
			indanhsachsv(head);
		}
		else if(lc == 9){
			break;
		}
	}
	return 0;
}
