#include<bits/stdc++.h>
using namespace std;

struct Node {
	string name;
	int marks;
	Node* next;
};
typedef struct Node* node;

node makeNode(string pname, int vmarks){
	node tmp = new Node();
	tmp -> name = pname;
	tmp -> marks = vmarks;
	tmp -> next = nullptr;
	return tmp;
}

void insertFirst(node &a, string pname, int vmarks){
	node tmp = makeNode(pname, vmarks);
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

int countPoint(node a, int vmarks){
	int count = 0;
	node p = a;
	while(p != nullptr){
		if(p -> marks != vmarks){
			count++;
		}
		p = p -> next;
	}
	return count;
}
int main(int argc, char** argv) {
	node head = nullptr;
	string lc;
	while(1){
		cin >> lc;
			if(lc == "ins"){
				string name;
				cin>>name;
				int marks;
				cin >> marks;
				insertFirst(head, name, marks);
			}
			else if(lc == "del"){
				deleteFirst(head);
			}
			else if(lc == "count"){
				int vmarks;
				cin >> vmarks;
				cout << countPoint(head, vmarks) << endl;
			}
			else if(lc == "fin"){
				break;
			}
	}
	return 0;
}
