#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};
typedef struct Node* node;

// cap phat dong 1 node moi voi kieu du lieu la x
node makeNode(int x){
	node tmp = new Node();
	tmp -> data = x;
	tmp -> next = nullptr;
	return tmp;
}
bool empty(node a){ // a la 1 node dau tien trong danh sach lien ket
	return a == nullptr;
}
// size cua danh sach lien ket

int size(node a){
	int count = 0;
	while(a != nullptr){
		count++;
		a = a -> next;
	}
	return count;
}

// them vao dau danh sach lien ket

void insertFirst(node &a, int x){ // 1 node a va ptu can them vao danh sach
	node tmp = makeNode(x);
	if(a == nullptr){
		a = tmp;
	}
	else{
		tmp -> next = a;
		a = tmp;
	}
}
void insertLast(node &a, int x){
	node tmp = makeNode(x);
	if(a == nullptr){
		a = tmp;
	}
		node p = a;
		while(p -> next != nullptr){
			p = p -> next;
		}
		p -> next = tmp;
}

void insertMiddel(node &a, int x, int pos){ // a la node hien tai, x la node can chen, pos la vi tri them
	int n = size(a);
	if(pos <= 0 || pos > n+1){
		cout<<"vi tri khong hop le\n";
	}
	if(n == 1){
		insertFirst(a, x);
	}
	else if(n == pos + 1){
		insertLast(a, x);
	}
	node p = a;
	for(int i = 1; i < pos - 1; i++){
		p = p -> next;
	}
	node tmp = makeNode(x);
	tmp -> next = p -> next;
	p -> next = tmp;
}

// xoa phan tu dau

void deleteFirst(node &a){
	if(a == nullptr){
		return;
	}
	a = a -> next;
}
// xoa ptu cuoi
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
// xoa ptu gia

void deleteMiddle(node &a, int pos){
	int n = size(a);
	if(pos <= 0 || pos > n + 1){
		return;
	}
	node truoc = nullptr;
	node sau = a;
	for(int i = 1; i < pos; i++){
		truoc = sau;
		sau = sau -> next;
	}
	if(truoc == nullptr){
		a = a -> next;
	}
	else{
		truoc -> next = sau -> next;
	}
}

void print(node a){
	cout<< "---------------------\n";
	while(a != nullptr){
		cout<<a->data<<" ";
		a = a -> next;	
	}
	cout<< "---------------------\n";
}

void xapxep(node a){
	for(node p = a; p != nullptr; p = p -> next){
		node min = p;
		for(node q = p -> next; q != nullptr; q = q -> next){
			if(min -> data > q -> data){
				min = q;
			}
		}
		int tmp = min -> data;
		min -> data = p -> data;
		p -> data = tmp;
	}
}

int maxNode(node a){
	int max = -1e9;
	for(node p = a; p != nullptr; p = p -> next){
		if(p -> data > max){
			max = p -> data;
		}
	}
	return max;
}

int main(int argc, char** argv) {
	node head = nullptr;
	while(1){
		cout<<"--------------menu-----------\n";
		cout<<"1. chon ptu vao dau danh sach\n";
		cout<<"2. chon phan tu vao cuoi danh sach\n";
		cout<<"3. chon phan tu vao giua danh sach\n";
		cout<<"4.xoa phan tu o dau\n";
		cout<<"5.xoa phan tu o cuoi\n";
		cout<<"6. xoa pha tu o giua\n";
		cout<<"7. duyet danh sach lien ket\n";
		cout<<"8.xap xap mang tang dan\n";
		cout<<"9. max cua mang la:\n";
		cout<<"-------------------------\n";
		cout<<"nhap lua chon cua ban";
		int lc;
		cout<<" nhap lua chon cua ban\n";
		cin>>lc;	
		if(lc == 1){
			int x;
			cout<<"nhap gia tri can chen:";
			cin>> x;
			insertFirst(head, x);
		}
		else if(lc == 2){
			int x;
			cout<< "nhap gia tri can chen:";
			cin>>x;
			insertLast(head, x);
		}
		else if(lc == 3){
			int x;
			cout<<"nhap gia tri can chen:"<<"\n";
			cin>>x;
			int pos;
			cin>>pos;
			int vt;
			cout<<"nhap vi tri can dung and chen:"<<"\n";
			insertMiddel(head, x, pos);
		}
		else if(lc == 4){
			cout<<" chen dau danh sach";
			deleteFirst(head);
		}
		else if(lc == 5){
			cout<<"chen cuoi danh sach";
			deleteLast(head);
		}
		else if(lc == 6){
			int pos;
			cout<<"nhap vi tri can xoa";
			cin>>pos;
			deleteMiddle(head, pos);
		}
		else if(lc == 7){
			print(head);
		}
		else if(lc == 8){
			xapxep(head);
		}
		else if(lc == 9){
			cout<<maxNode(head)<<"\n";
		}
	
	}
	
	return 0;
}
