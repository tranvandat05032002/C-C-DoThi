#include <iostream>
using namespace std;

struct Node{
	int  mahang ;
	int  trongluong ;
	int dongia;
	string tentraicay;
	Node* next;
};
typedef struct Node* node;

node makeNode(int mahang,int trongluong,int dongia,string tentraicay){
	node tmp = new Node();
	tmp -> mahang = mahang;
	tmp -> trongluong = trongluong;
	tmp -> dongia = dongia;
	tmp -> tentraicay = tentraicay;
	return tmp;
}

void insertFirst(node &a, int mathang, int trongluong, int dongia,string tentraicay){
	node tmp = makeNode( mathang, trongluong, dongia, tentraicay);
	if(a == nullptr){
		a = tmp;
	}
	else{
		tmp -> next = a;
		a = tmp;
	}
}
void deleteFirst(node &a){
	if(a == nullptr){
		return;
	}
	else{
		a = a -> next;
	}
}
long long tienban(node a, int vmahang){
	long long tien = 0;
	for(node p = a; p != nullptr; p = p -> next){
		if(p -> mahang == vmahang){
			tien += p -> trongluong * p -> dongia;
		}
	}
	return tien;
}

int main(int argc, char** argv) {
	node head =nullptr;
	string select;
	while(1){
		cin >> select;
		if(select == "Add"){
			int mahang, trongluong, dongia;
			cin >> mahang >> trongluong >> dongia;
			string tentraicay;
			cin >> tentraicay;
			insertFirst(head, mahang, trongluong, dongia, tentraicay);
		}
		else if(select == "Bill"){
			int  vmahang;
			cin >> vmahang;
			cout << "Total: " << tienban(head, vmahang) << endl;
		}
		else if(select == "Del"){
			deleteFirst(head);
		}
	}
	return 0;
}
