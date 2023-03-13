#include<bits/stdc++.h>
using namespace std;

struct Node{
	int key;
	Node *l;
	Node *r;
};

void init(Node *&root){
	root = nullptr;
}

Node* createNode(int x){ 
	Node *p = new Node;
	p -> key = x;
	p -> l = nullptr;
	p -> r = nullptr;
	return p;
}
//add node to list
void insertNode(Node *&root, int x){
	//case is empty list
	if(root == nullptr){
		root = createNode(x);
	}
	else{
		// create node p 
		Node *p = root;
		// create node parent save then traces the child node
		Node *parent = nullptr;
		// is true if list not null and data of list p is not equal to the value pass to outer value
		while(p != nullptr && p -> key != x){ 
			parent = p;
			if(p -> key > x){
				p = p -> l;
			}
			else{
				p = p -> r;
			}
		}
		if(p == nullptr){ 
			p = createNode(x);
			
			if(parent -> key > x){
				parent -> l = p;
			}
			else{
				parent -> r = p;
			}
		}
	}
}

//Delete node
void deleteNode(Node *&root, int x){
	if(root != nullptr){
		Node *p = root;
		Node *parent = nullptr;
		while(p != nullptr && p -> key != x){
			parent = p;
			if(p -> key > x){
				p = p -> l;
			}
			else{
				p = p -> r;
			}
		}
		
		if(p != nullptr){
			// instance delete node
			//TH1: xoa node co hai nut con (node root)
			if(p -> l != nullptr && p -> r != nullptr){
				Node *r = p -> r; //duyet nhanh phai tren cay con trai
				while(r -> l != nullptr){
					parent = r; //truy vet 
					r = r -> l; // di chuyen nhanh trai trn cay con
				}
				p -> key = r -> key; // gan node goc can xoa voi node con tim duoc (node the mang)
				p = r; 
				// gan vao p de roi vao TH2 hoac TH3
				// p la nut the mang la nut leaf hay la nut co mot node con
			}
			//+TH2: delete Node leaf 
			if(p -> l == nullptr && p -> r == nullptr){ 
				if(parent -> key > p -> key){
					parent -> l = nullptr;
				}
				else{
					parent -> r = nullptr;
				}
				delete(p);
			}
			//TH3: delete a node that has a child node
			else{
				if(p -> l != nullptr){
					if(parent -> key > p -> key){
						parent -> l = p -> l;
					}
					else{
						parent -> r = p -> l;
					}
				}
				else{
					if(parent -> key > p -> key){
						parent -> l = p -> r;
					}
					else{
						parent -> r = p -> r;
					}
				}
				delete(p);
			}
		}
//optimal	
//			Node *t;
//			if(p -> r == nullptr){
//				t = p -> l;
//			}
//			else if(p -> l == nullptr){
//				t = p -> r;
//			}
//			
//			if(parent -> key > p -> key){
//				parent -> l = t;
//			}
//			else{
//				parent -> r = t;
//			}
//			delete(p);
//		}
	}
}

void display_lnr(Node *root){
	if(root != nullptr){
		display_lnr(root -> l); //de quy
		cout << root -> key << " ";
		display_lnr(root -> r);
	}
}
int main(int argc, char** argv) {
	Node *root;
	init(root);
	
	insertNode(root, 20);
	insertNode(root, 10);
	insertNode(root, 40);
	insertNode(root, 9);
	insertNode(root, 15);
	insertNode(root, 11);
	insertNode(root, 18);
	insertNode(root, 35);
	insertNode(root, 48);
	// 9 10 11 15 18 20 35 40 48 // O(n)
	display_lnr(root);
	cout << endl;
	deleteNode(root, 9);
	display_lnr(root);
	deleteNode(root, 10);
	cout << endl;
	display_lnr(root);
	cout << endl;
	insertNode(root, 17);
	display_lnr(root);
	deleteNode(root, 15);
	cout << endl;
	display_lnr(root);
	deleteNode(root, 18);
	cout << endl;
	display_lnr(root);
	return 0;
}
