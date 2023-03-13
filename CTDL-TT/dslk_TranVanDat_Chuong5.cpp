#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;

struct Node{
	int info;
	Node *next;
};
//Node* F // typedef
Node *createNode(int x){
	Node* f = new Node;
	f -> info = x;
	f -> next = nullptr;
	return f;
}
int sizeDSNode(Node* &f){
	int count = 0;
	while(f != nullptr){
		count++;
		f = f -> next;
	}
	return count;
}
void addFirst(Node *&f, int x){
	Node *nodeAdd = createNode(x);
	if(f == nullptr){
		f = nodeAdd;
	}
	else{
		nodeAdd -> next = f;
		f = nodeAdd;
	}
}
void delFirst(Node* &a){
	if(a == nullptr){
		return;
	}
	a = a -> next;
}
void displayDsNode(Node *&f){
	for(Node *p = f; p != nullptr; p = p -> next){
		cout << p -> info << " ";
	}
	cout << endl;
}
void Menu(){
		cout << "Moi nhap lua chon (number 1 -> 11): " << endl;
		cout << "1. dem so nut trong danh sach F be hon x." << endl;
		cout << "2. chen mot node vao danh sach dam bao tinh tang dan." << endl;
		cout << "3. Xoa mot nut co trung info bang x." << endl;
		cout << "4. Tim gia tri lon nhat cua danh sach." <<endl;
		cout << "5. Them mot node vao cuoi danh sach." << endl;
		cout << "6. Xoa nut cuoi danh sach." << endl;
		cout << "7. Tim dia chi mot node bang gia tri X." << endl;
		cout << "8. In danh sach cac node theo chieu nguoc su dung DE QUY." << endl;
		cout << "9. In danh sach cac node theo chieu nguoc su dung STACK." << endl;
		cout << "10. Sao chep mot danh sach." << endl;
		cout << "11. Hop cua hai danh sach." << endl;
		cout << "12. Giao cua hai danh sach." << endl;
		cout << "13. In danh sach." << endl;
		cout << "Exit(a -> z or 14 -> n" << endl;
		cout << "End!!" << endl; 
		cout << "!----------------------------------------------------------!" << endl;
}
// --------------------------------------------------
//1.
int countNode(Node *f, int x){
	int count = 0;
	while(f != nullptr && f -> info < x){
		count++;
		f = f -> next;
	}
	return count;
}
//2.
void addValueAsc(Node *&f, int x){
	Node *addNode = createNode(x);
	if(f == nullptr){
		f = addNode;
	}
	else{
		Node *truoc = nullptr;
		Node *sau = f;
		while(sau != nullptr && sau -> info < x){
			truoc = sau;
			sau = sau -> next;
		}
		if(truoc == nullptr){
			addFirst(f, x);
		}
		else{
			addNode -> next = truoc -> next;
			truoc -> next = addNode;
		}
	}
}
//3.
void deleteNodEqualValue(Node *&f, int x){
	if(f == nullptr){
		return;
	}
	else{
		Node *truoc = nullptr;
		Node *sau = f;
		while(sau != nullptr && sau -> info != x){
			truoc = sau;
			sau = sau -> next;
		}
		if(truoc == nullptr){
			delFirst(f);
			return;
		}
		else if(sau == nullptr){
			cout << "Khong tim thay!!!" << endl;
		}
		else{
			truoc -> next = sau -> next;
		}
	}
}
//4.
int maxValueOfNode(Node *&f){
	int max = f -> info;
	if(f == nullptr){
		return -1;
	}
	int maxValue;
	for(Node *p = f; p != nullptr; p = p -> next){
		maxValue = std::max(p -> info, max);
	}
	return maxValue;
}
//5.
void addLast(Node *f, int x){
	Node *nodeAdd = createNode(x);
	if(f == nullptr){
		f = nodeAdd;
	}
	else{
		Node *p = f;
		while(p -> next != nullptr){
			p = p -> next;
		}
		p -> next = nodeAdd;
	}
}
//6.
void deleteLast(Node *&f){
	if(f == nullptr){
		return;
	}
	else{
		Node *truoc = nullptr;
		Node *sau = f;
		while(sau -> next != nullptr){
			truoc = sau;
			sau = sau -> next;
		}
		if(truoc == nullptr){
			f = nullptr;
		}
		else{
			truoc -> next = nullptr;	
		}
	}
}
//7.
Node *searchNode(Node *&f, int x){
	if(f == nullptr){
		return nullptr;
	}
	else{
		for(Node *p = f; p != nullptr; p = p -> next){
			if(p -> info == x){
				return p;
			}
		}
	}
}
//8.
void recursive_displayReverse(Node *&f){
	if(f == nullptr){
		return;
	}
	else{
		recursive_displayReverse(f -> next);
		cout << f -> info << " ";
	}
}
//9.
void stack_displayReverse(Node *&f){
	if(f == nullptr){
		return;
	}
	else{
		stack <int> s;
		while(f != nullptr){
			s.push(f -> info);
			f = f -> next;
		}
		while(!s.empty()){
			cout << s.top() << " ";
			s.pop();
		}
	}
}
//10.
void coppyList(Node *&f, Node *&l){
	l = nullptr;
	Node **p = &l; 
	if(f == nullptr){
		return;
	}
	else{
		while(f != nullptr){
			*p = new Node;
			(*p) -> info = f -> info;
			(*p) -> next = nullptr;
			
			f = f -> next;
			p = &((*p)->next);
		}
	}
}
int main(int argc, char** argv) {
	Node *f = nullptr;
	Node *l = nullptr;
	Node *f2 = nullptr;
	Node *f3 = nullptr;
	addFirst(f, 18);
	addFirst(f, 10);
	addFirst(f, 6);
	addFirst(f, 4);
	addFirst(f, 3);
	addFirst(f, 1);
	
	addFirst(f2, 20);
	addFirst(f2, 13);
	addFirst(f2, 10);
	addFirst(f2, 8);
	addFirst(f2, 6);
	addFirst(f2, 4);
	addFirst(f2, 2);
	
	while(true){
		int select;
		Menu();
		cin >> select;
		if(select == 1){
			cout << countNode(f, 4) << endl;
		}
		else if(select == 2){
			addValueAsc(f, 7);
		}
		else if(select == 3){
			deleteNodEqualValue(f, 3);
		}
		else if(select == 4){
			cout << maxValueOfNode(f);
		}
		else if(select == 5){
			addLast(f, 15);
		}
		else if(select == 6){
			deleteLast(f);
		}
		else if(select == 7){
			cout << searchNode(f, 4) << endl;
		}
		else if(select == 8){
			recursive_displayReverse(f);
			cout << endl;
		}
		else if(select == 9){
			stack_displayReverse(f);
			cout << endl;
		}
		else if(select == 10){
			coppyList(f, l);
			cout << "Danh sach sau khi coppy: ";
			displayDsNode(l);
		}
		else if(select == 11){
			f3 = merge_lists(f, f2);
			cout << "hop cua hai danh sach: ";
			displayDsNode(f3);
		}
		else if(select == 13){
			displayDsNode(f);
		}
	}
	return 0;
}
