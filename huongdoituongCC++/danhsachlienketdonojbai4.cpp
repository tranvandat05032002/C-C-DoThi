#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

struct Node{
	Node* next;
	int data;
};
typedef struct Node* node;

int size(node a){
	int count = 0;
	while(a != NULL){
		++count;
		a = a -> next;
	}
	return count;
}
node makeNode(int x){
	node tmp = new Node();
	tmp -> data = x;
	tmp -> next = NULL;
	return tmp;
}

void insertFirst(node &a, int x){
	node tmp = makeNode(x);
	if(a == NULL){
		a = tmp;
	}
	else{
		tmp -> next = a;
		a = tmp;
	}
}

void insertLast(node &a, int x){
	node tmp = makeNode(x);
	if(a == NULL){
		a = tmp;
	}
	else{
		node p = a;
		while(p->next != NULL){
			p = p -> next;
		}
		p -> next = tmp;
	}
}
void insertMiddle(node &a, int x, int pos){
	int n = size(a);
	node tmp = makeNode(x);
	if(pos <= 0 || pos > n+1){
		insertLast(a, x);
		return;
	}
	if(pos == n+1){
		insertLast(a, x);
		return;
	}
	else if(pos == 1){
		insertFirst(a, x);
		return;
	}
	node p = a;
	for(int i = 1; i < pos - 1; i++){
		p = p -> next;
	}
	tmp -> next = p -> next;
	p -> next = tmp;
}

void deleteMiddle(node &a, int pos){
	int n = size(a);
	if(pos <= 0 || pos > n+1){
		return;
	}
	node truoc = NULL;
	node sau = a;
	for(int i = 1; i < pos; i++){
		truoc = sau;
		sau = sau -> next;
	}
	if(truoc == NULL){
		a = a -> next;
	}
	else{
		truoc -> next = sau -> next;
	}
}

double TBCarray(node a){
	long long sum = 0;
	float tbc=0.0000;
	for(node p = a; p != NULL; p = p->next ){
		sum += p -> data;
	}
	tbc = (float)sum / size(a);
	return tbc;
}

int main(int argc, char** argv) {
	node head = NULL;
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++){
		int x; cin>>x;
		insertLast(head, x);
	}
	while(1){
		char select;
		cin >> select;
		if(select == 'i'){
			int x, pos;
			cin>>x>>pos;
			insertMiddle(head, x, pos);
		}
		else if(select == 'd'){
			int pos;
			cin>>pos;
			deleteMiddle(head, pos);
		}
		else if(select == 'a'){
			cout<<setprecision(4)<<fixed <<TBCarray(head)<<endl;
		}
		else if(select == '0'){
			char x;
			cin >> x;
			if(x == '0'){
				break;
			}
		}
	}
	return 0;
}
