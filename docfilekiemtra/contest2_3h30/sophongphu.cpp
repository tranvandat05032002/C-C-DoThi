#include<bits/stdc++.h>
using namespace std;
bool checkntNumberphongphu(int n){
	int sum = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			sum += i;
		}
	}
	if(sum > n){
		return true;
	}
	return false;
}
struct Node{
	int data;
	Node* next;
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
void inserLast(node &a, int x){
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
int continueTrungandCountnt(node a){
	xapxep(a);
	int in[1000];
	int ptu = 0;
	for(node p = a; p != nullptr; p = p -> next){
		for(node q = p -> next; q != nullptr; q = q -> next){
			if(p -> data == q -> data){
				p = p -> next;
			}
		}
		in[ptu++] = p -> data;
	}
	int count = 0;
	for(int i = 0; i < ptu; i++){
		if(checkntNumberphongphu(in[i]) == true){
			count++;
		}
	}
	return count;
}
void prin(node a){
	while(a != nullptr){
		cout << a -> data << " ";
		a = a -> next;
	}
}
int main(int argc, char** argv) {
	node head = nullptr;
	int n;
	cin >> n;
	int x;
	for(int i = 0; i < n; i++){
		cin >> x;
		inserLast(head, x);
	}
	cout << continueTrungandCountnt(head);
}
