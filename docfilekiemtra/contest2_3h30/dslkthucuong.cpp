#include<bits/stdc++.h>
using namespace std;
struct Node{
	string name;
	int price;
	Node* next;
};
typedef struct Node* node;

node makeNode(string n, int p){
	node tmp = new Node();
	tmp -> name = n;
	tmp -> price = p;
	tmp -> next = nullptr;
	return tmp;
}

void insertFirst(node &a, string n, int p){
	node tmp = makeNode(n, p);
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
		a = a -> next;
}
int countPrice(node a, int p){
	int count = 0;
	for(node q = a; q != nullptr; q = q->next){
		if(q -> price == p){
			count++;
		}
	}
	return count;
}

int main(int argc, char** argv) {
	node head = nullptr;
	string select;
	while(1){
		cin >> select;
		if(select == "ins"){
			string n;
			cin >> n;
			int p;
			cin >> p;
			insertFirst(head, n, p);
		}
		else if(select == "del"){
			deleteFirst(head);
		}
		else if(select == "count"){
			int p;
			cin >> p;
			cout<< countPrice(head, p) << endl;
		}
		else if(select == "finish"){
			break;
		}
	}
	return 0;
}
