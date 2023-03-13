#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

//create a node
Node* makeNode(int x){
	Node* p = new Node();
	p -> data = x;
	p -> next = nullptr;
	return p;
}
// check size list
int size(Node* p){
	int count = 0;
	while(p != nullptr){
		count++;
		p = p -> next;
	}
	return count;
}
// insertFirst
void insertFirst(Node* &a, int x){
	Node* p = makeNode(x);
	if(a == nullptr){
		a = p;
	}
	else{
		p -> next = a;
		a = p;
	}
}
// insetLast
void insertLast(Node* &a, int x){
	Node* p = makeNode(x);
	Node* q;
	if(a == nullptr){
		a = p;
	}
	else{
		q  = a;
		while(q -> next != nullptr){
		 	q = q -> next;
		}
		q -> next = p;
	}
}
//insert middle
void insertMiddle(Node* a, int x, int pos){
	if(pos <= 0 || pos >= size(a)){
		insertLast(a, x);
		return;
	}
	else if(pos == 0){
		insertFirst(a, x);
		return;
	}
	else if(pos == size(a)){
		insertLast(a, x);
	}
	else{
		Node* q;
		Node* p = makeNode(x);
		q = a;
		for(int i = 0; i < pos; i++){
			q = q -> next;
		}
		p -> next = q -> next;
		q -> next = p;
	}
}
//delete first
void delFirst(Node* &a){
	if(a == nullptr){
		return;
	}
	a = a -> next;
}
// delete last
void delLast(Node* &a){
	if(a == nullptr){
		return;
	}
	Node* truoc = nullptr;
	Node* sau = a;
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
// delete middle
void delMiddle(Node* &a, int pos){
	if(pos < 0 || pos >= size(a)){
		return;
	}
	Node* truoc = nullptr;
	Node* sau = a;
	for(int i = 0; i < pos; i++){
		truoc = sau;
		sau = sau -> next;
	}
	if(truoc == nullptr){
		delFirst(a);
	}
	else{
		truoc -> next = sau -> next;
	}
}
void displayNode(Node* a){
	for(Node* p = a; p != nullptr; p = p -> next){
		cout << p -> data << " ";
	}
}
int main(int argc, char** argv) {
	Node* head = nullptr;
	while(true){
		string lc;
		cout << "\nNhap lc: ";
		cin >> lc;
		if(lc == "f"){
			cout << "gtri add first: " << endl;
			int x;
			cin >> x;
			insertFirst(head, x);
		}
		else if(lc == "l"){
			cout << "giatri add last: " << endl;
			int x;
			cin >> x;
			insertLast(head, x);
		}
		else if(lc == "m"){
			cout << "gtri add vitri pos: " << endl;
			int pos;
			int x;
			cout << "Nhap pos, x: ";
			cin >> pos >> x;
			insertMiddle(head, x, pos);
		}
		else if(lc == "df"){
			delFirst(head);
		}
		else if(lc == "dl"){
			delLast(head);
		}
		else if(lc == "dmid"){
			int pos;
			cout << "Nhap vi tri can xoa: ";
			cin >> pos;
			delMiddle(head, pos);
		}
		else if(lc == "show"){
			displayNode(head);
		}
		else{
			break;
		}
	}
	return 0;
}
