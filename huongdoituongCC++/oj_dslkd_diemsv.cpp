#include<bits/stdc++.h>
using namespace std;

struct Node{
	string name;
	int marks;
	struct Node* next;
};
typedef struct Node* node;

node makeNode(node &a, string vName, int vMark){
	node p = new Node();
	p -> name = vName;
	p -> marks = vMark;
	p -> next = nullptr;
	return p;
}

void insertFirst(node &a, string pName, int vMark){
	node tmp = makeNode(a, pName, vMark);
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

int countMark(node a, int vMark){
	int count = 0;
	for(node p = a; p != nullptr; p = p -> next){
		if(p -> marks != vMark){
			count++;
		}
	}
	return count;
}

int main(){
	node head = nullptr;
	string select, pName;
	int vMarks;
	while(1){
		cin >> select;
		if(select == "ins"){
			cin >> pName;
			cin >> vMarks;
			insertFirst(head, pName, vMarks);
		}
		if(select == "del"){
			deleteFirst(head);
		}
		if(select == "count"){
			cin >> vMarks;
			cout << countMark(head, vMarks) << endl;
		}
		if(select == "fin"){
			break;
		}
	}
	return 0;
}
