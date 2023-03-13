#include<bits/stdc++.h>
using namespace std;
struct Node{
	string name;
	int price;
	Node* next;
};
typedef struct Node* node;
node makeNode(string name, int price){
	node tmp = new Node();
	tmp -> name = name;
	tmp -> price = price;
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

void insertFirst(node &a, string name, int price){
	node tmp = makeNode(name, price);
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

int countCF(node a, int userPrice){
	int count = 0;
	for(node p = a; p != nullptr; p = p -> next){
		if(p -> price == userPrice){
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
			string name;
			int price;
			cin >> name >> price;
			insertFirst(head, name, price);
		}
		else{
			if(select == "del"){
				deleteFirst(head);
			}
			else if(select == "count"){
				int userPrice;
				cin >> userPrice;
				cout << countCF(head, userPrice) << endl;
			}
			else if(select == "finish"){
				break;
			}
		}
	}
	return 0;
}
