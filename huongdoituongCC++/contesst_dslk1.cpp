#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};
typedef struct Node* node;

node makeNode(int x){
	node tmp = new Node();
	tmp -> data = x;
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
void insertLast(node &a, int x){
	node tmp = makeNode(x);
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

long long sum(node a){
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
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		insertLast(head, x);
	}
	while(1){
		char lc;
		cin >> lc;
		if(lc == 'i'){
			int x;
			cin >> x;
			insertLast(head, x);
		}
		else if(lc == 'd'){
			int pos;
			cin >> pos;
			deleteMiddle(head, pos);
		}
		else{
			if(lc == 's'){
				cout << sum(head)<<endl;
			}
			else if(lc == '0'){
				char x;
				cin >> x;
				if(x == '0'){
					break;
				}
			}
		}
	}
	return 0;
}
