#include <bits/stdc++.h>
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
	tmp -> next = nullptr;
	return tmp;
}

void inserLast(node &a, int mathang, int trongluong, int dongia,string tentraicay){
	node tmp = makeNode( mathang, trongluong, dongia, tentraicay);
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
void deleteFirst(node &a){
	if(a == nullptr){
		return;
	}
	else{
		a = a -> next;
	}
}
void tienban(node a, int vmahang){
	long long tien = 0;
	int check = 0;
	int n, m;
	string name;
	for(node p = a; p != nullptr; p = p -> next){
		if(p -> mahang == vmahang){
			tien += p -> trongluong * p -> dongia;
			 n = p -> trongluong;
			 m = p -> dongia;
			 name = p -> tentraicay;
			check = 1;
		}
	}
	if(check == 0){
		cout << "Not Found" << endl;
	}
	else{
	cout << vmahang << " " << n << " " << m << " " << name <<"." <<" " <<"Total:" << tien << endl;
	}
}

int main(int argc, char** argv) {
	node head =nullptr;
	string select;
	int mahang, trongluong, dongia;
	while(1){
		cin >> select;
		if(select == "Add"){
			cin >> mahang >> trongluong >> dongia;
			string tentraicay;
			cin >> tentraicay;
			inserLast(head, mahang, trongluong, dongia, tentraicay);
		}
		else if(select == "Bill"){
			int  vmahang;
			cin >> vmahang;
			tienban(head, vmahang);
		}
		else if(select == "Del"){
			deleteFirst(head);
		}
		else if(select == "Fin"){
			break;
		}
	}
	return 0;
}
