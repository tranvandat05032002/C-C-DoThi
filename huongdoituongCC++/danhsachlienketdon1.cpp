#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};
typedef struct Node* node;

// them node moi 
node makeNode(int x){
	node p = new Node();
	p -> data = x;
	p -> next = nullptr;
	return p;
}
// check null
bool empty(node a){
	return a == nullptr;
}

//so phan tu trong node

int size(node a){
	int count = 0;
	while(a != nullptr){
		count ++;
		a = a -> next;
	}
	return count;
}
// them 1 phan tu vao cuoi node
void insertLast(node &a, int x){
	node tmp = makeNode(x);
	node p = a;
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

// xoa 1 ptu giua node

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
// cong mang
long long sumArray(node a){
	long long sum = 0;
	for(node p = a; p != nullptr; p = p -> next){
		sum += p -> data;
	}
	return sum;
}
int main(int argc, char** argv) {
	node head = nullptr;
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int x;
		cin>>x;
		insertLast(head, x);
	}
	while(1){
		char selc;
		cin>>selc;
		if(selc == 'i'){
			int x;
			cin>>x;
			insertLast(head, x);
		}
		else if(selc == 's'){
			cout<<sumArray(head)<<"\n";
		}
		else if(selc == 'd'){
				int pos;
				cin>>pos;
				deleteMiddle(head, pos);
		}
		if(selc == 'a'){
			cout<<sumArray(head);
		}
		else if(selc == '0'){
			char x;
			cin>>x;
			if(x == '0'){
				break;
			}
		}
	}
	return 0;
}
