#include<bits/stdc++.h>
using namespace std;

struct Node{
	char c;
	int m;
	Node* next;
};
typedef struct Node* node;

node makeNode(char c, int m){
	node tmp = new Node();
	tmp -> c = c;
	tmp -> m = m;
	tmp -> next = nullptr;
	return tmp;
}

node insertFirstChar(node &a, char c, char m){
	node tmp = makeNode(c, m);
	if(a == nullptr){
		a = tmp;
	}
	else{
		tmp -> next = a;
		a = tmp;
	}
}
void statistic(node &a){
	int count[26] = {0};
	int dem = 0;
	for(node p = a; p != nullptr; p = p -> next){
		if(p -> c >= 'A' && p -> c <= 'Z'){
			count[p -> c - 'A'] += p -> m;
		}
	}
	for(int i = 0; i < 26; i++){
		if(count[i] != 0){
			cout << char(i + 65) << ": " << count[i] << endl;
		}
	}
}

int main(int argc, char** argv) {
	node head = nullptr;
	char kytu;
	int t;
	cin >> t;
	while(t--){
		cin >> kytu;
		int quantity;
		cin >> quantity;
		insertFirstChar(head, kytu, quantity);
	}
	statistic(head);
	return 0;
}
