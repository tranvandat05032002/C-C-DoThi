#include<bits/stdc++.h>
using namespace std;

struct Node{
	int mahang;
	int trongluong;
	int dongia;
	string tentraicay;
	Node *next;
};
typedef struct Node* node;
node makeNode(int mahang, int trongluong, int dongia, string tentraicay){
	node tmp = new Node();
	tmp -> mahang = mahang;
	tmp -> trongluong = trongluong;
	tmp -> dongia = dongia;
	tmp -> tentraicay = tentraicay;
	tmp -> next = nullptr;
	return tmp;
}

int size(node a){
	int count = 0;
	while(a != nullptr){
		count++;
		a = a -> next;
	}
	return count;
}

void insertLast(node &a, int mahang, int trongluong, int dongia, string tentraicay){
	node tmp = makeNode(mahang, trongluong, dongia, tentraicay);
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

void sumMahang(node a, int userMahang){
	int printMahang = 0;
	int printTrongluong = 0;
	int printDongia = 0;
	string printtentraicay;
	bool check = false;
	long long sum = 0;
	for(node p = a; p != nullptr; p = p -> next){
		if(p -> mahang == userMahang){
			check = true;
			sum += p -> trongluong * p -> dongia;
				printMahang = userMahang;
				printTrongluong = p -> trongluong;
				printtentraicay = p -> tentraicay;
				printDongia = p -> dongia;
		}
	}
	if(check == true){
		cout << printMahang << " " << printTrongluong << " " << printDongia << " " << printtentraicay << ". " << "Total:" << sum << endl;
	}
	else if(check == false){
		cout << "Not Found" << endl;
	}
}
int main(int argc, char** argv) {
	node head = nullptr;
	string select;
	while(1){
		cin >> select;
		if(select == "Add"){
			int mahang;
			int trongluong;
			int dongia;
			string tentraicay;
			cin >> mahang >> trongluong >> dongia >> tentraicay;
			insertLast(head, mahang, trongluong, dongia, tentraicay);
		}
		else{
			if(select == "Del"){
				deleteFirst(head);
			}
			else if(select == "Bill"){
				int userMahang;
				cin >> userMahang;
				sumMahang(head, userMahang);
			}
			else if(select == "Fin"){
				break;
			}
		}
	}
	return 0;
}
