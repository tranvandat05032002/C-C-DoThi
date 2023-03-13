#include<bits/stdc++.h>
using namespace std;

struct Node{
	int mathang;
	int trongluong;
	int dongia;
	string tentraicay;
	Node* next;
};
typedef struct Node* node;
node makeNode(int mathang, int trongluong, int dongia, string tentraicay){
	node tmp = new Node();
	tmp -> mathang = mathang;
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
void insertFirst(node &a, int mathang, int trongluong, int dongia, string tentraicay){
	node tmp = makeNode( mathang, trongluong, dongia, tentraicay);
	if(a == nullptr){
		a = tmp;
	}
	else{
		tmp -> next = a;
		a = tmp;
	}
}
long long sumtraicay(node a, string nameTraicay){
	long long sum = 0;
	for(node p = a; p != nullptr; p = p -> next){
		if(p -> tentraicay == nameTraicay){
			sum += p -> trongluong * p -> dongia;
		}
	}
	return sum;
}
int main(int argc, char** argv) {
	node head = nullptr;
	string lc;
	while(1){
		cin >> lc;
		if(lc == "add"){
			int mahang;
			cin >> mahang;
			int trongluong;
			cin >> trongluong;
			int dongia;
			cin >> dongia;
			string tentraicay;
			cin >> tentraicay;
			insertFirst(head, mahang, trongluong, dongia, tentraicay);
		}
		else if(lc == "Sum"){
			string nameTraiCay;
			cin >> nameTraiCay;
			cout << sumtraicay(head, nameTraiCay) << endl;
		}
		else if(lc == "Fin"){
			break;
		}
	}
	return 0;
}
