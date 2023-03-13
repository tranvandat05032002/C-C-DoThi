#include<bits/stdc++.h>
using namespace std;
struct Node{
	string name;
	int bib;
	int age;
	Node* next;
};
typedef struct Node* node;

node makeNode(string name, int bib, int age){
	node tmp = new Node();
	tmp -> name = name;
	tmp -> bib = bib;
	tmp -> age = age;
	tmp -> next = nullptr;
	return tmp;
}
void insertLast(node &a, string vname, int vbib, int vage){
	node tmp = makeNode(vname, vbib, vage);
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

void print(node a){
	while(a != nullptr){
		cout << a -> bib << " ";
		a = a -> next;
	}
	cout << endl;
}

void FindBib(node a, int vbib){
	bool check = false;
	for(node p = a; p != nullptr; p = p -> next){
		if(vbib == p -> bib){
			cout << p -> bib << " " << p -> name << " " << p -> age << endl;
			check = true;
		}
	}
	if(!check){
		cout << vbib << " " << "No" << endl;
	}
}
void sortBib(node a){
	for(node p = a; p != nullptr; p = p -> next){
		node min = p;
		for(node q = p -> next; q != nullptr; q = q -> next){
			if(p -> bib > q -> bib){
				string fullName = p -> name;
				p -> name = q -> name;
				q -> name = fullName;
				int	changeAge = p -> age;
				p -> age = q -> age;
				q -> age = changeAge;
				int tmp = p -> bib;
				p -> bib = q -> bib;
				q -> bib = tmp;
			}
		}
	}
}

int main(int argc, char** argv) {
	node head = nullptr;
	string name;
	int bib;
	int age;
	string select;
	while(1){
		cin >> select;
		if(select == "ins"){
			cin >> name;
			cin >> bib;
			cin >> age;
			insertLast(head, name, bib, age);
		}
		else if(select == "prtlist"){
			sortBib(head);
			print(head);
		}
		else{
			if(select == "find"){
				int vbib;
				cin >> vbib;
				FindBib(head, vbib);
			}
			else if(select == "end"){
				break;
			}
		}
	}
	return 0;
}
