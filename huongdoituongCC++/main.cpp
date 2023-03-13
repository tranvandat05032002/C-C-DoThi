#include<bits/stdc++.h>
using namespace std;

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
		count ++;
		a = a -> next;
	}
	return count;
}
void insertFirst(node &a)
int main(int argc, char** argv) {
	return 0;
}
