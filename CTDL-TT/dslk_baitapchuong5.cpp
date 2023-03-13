#include<bits/stdc++.h>
using namespace std;

struct Node{
	int info;
	Node* next;
};

Node* createNode(int x){
	Node* p = new Node();
	p -> info = x;
	p -> next = nullptr;
	return p;
}
int size(Node* p){
	int count = 0;
	while(p != nullptr){
		count++;
		p = p -> next;
	}
	return count;
}
void addFirst(Node* &a, int x){
	Node* p = createNode(x);
	if(a == nullptr){
		a = p;
	}
	else{
		p -> next = a;
		a = p;
	}
}
void sortAsc(Node* a){
	for(Node* pi = a; pi != nullptr; pi = pi -> next){
		for(Node* pj = pi -> next; pj != nullptr; pj = pj -> next){
			if(pi -> info > pj -> info){
				int tmp = pi -> info;
				pi -> info = pj -> info;
				pj -> info = tmp;
			}
		}
	}
}
void displayList(Node* a){
	for(Node* p = a; p != nullptr; p = p -> next){
		cout << p -> info << " ";
	}
}
int main(int argc, char** argv) {
	Node* f = nullptr;
	while(true){
		string lc;
		cout << "Nhap lc: ";
		getline(cin, lc);
		if(lc == "f"){
			int x;
			cout << "Nhap gtri add: ";
			cin >> x;
			addFirst(f, x);
		}
		else if(lc == "s"){
			sortAsc(f);
		}
		else if(lc == "show"){
			displayList(f);
			cout << endl;
		}
		else if(lc == "e"){
			break;
		}
	}
	return 0;
}
