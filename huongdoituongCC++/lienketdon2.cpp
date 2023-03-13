#include<bits/stdc++.h>
using namespace std;

struct Node {
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

bool emply(node a){
	return a == nullptr;
}

int size(node a){
	int count = 0;
	while(a != nullptr){
		count++;
		a = a -> next;
	}
	return count;
}

// chen dau

void insertFirst(node &a, int x){
	node tmp = makeNode(x);
	if(a == nullptr){
		a = tmp;
	}
	else{
		tmp -> next = a;
		a = tmp;
	}
}
//chen cuoi

void insertLast(node &a, int x){
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

// chen giua
void insertMiddle(node &a, int x, int pos){
	int n = size(a);
	if(pos <= 0 || pos > n + 1){
		insertLast(a, x);
		return;
	}
	if(pos == n + 1){
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
	node tmp = makeNode(x);
	tmp -> next = p -> next;
	p -> next = tmp;
}

// xoa middle

void deleteMiddle(node &a, int pos){
	int n = size(a);
	if(pos <= 0 || pos > n + 1){
		return;
	}
	node truoc = nullptr;
	node sau = a;
	for(int i = 1; i < pos; i++){
		truoc = sau;
		sau = sau -> next;
	}
	if(truoc == nullptr){
		a = a -> next;
	}
	else{
		truoc -> next = sau -> next;
	}
}

double average(node a){
	float tbc=0.0000;
	long long sum=0; 
	for(node p=a;p!=NULL;p=p->next){
		sum+=p->data; 
	} 
	tbc = (float)sum/size(a); 
	return tbc; 
} 
int main(int argc, char** argv) {
	node head = nullptr;
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++){
		int x; 
		cin>>x;
		insertLast(head, x);
	}
	while(1){
		char selc;
		cin>>selc;
		if(selc == 'i'){
			int x;
			cin>>x;
			int pos;
			cin>>pos;
			insertMiddle(head, x, pos);
		}
		else if(selc == 'd'){
			int pos;
			cin>>pos;
			deleteMiddle(head, pos);
		}
		else if(selc == 'a'){
			cout<<setprecision(4)<<fixed<<average(head)<<endl;
		}
		else if(selc == 0){
			char x;
			cin>>x;
			if(x == '0'){
				break;
			}
		}
	}
	return 0;
}
