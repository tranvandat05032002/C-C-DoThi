#include<bits/stdc++.h>
using namespace std;
struct Node{
	string name;
	int point;
	Node* next;
};
typedef struct Node* node;

node makeNode(string name, int point){
	node tmp = new Node();
	tmp -> name = name;
	tmp -> point = point;
	return tmp;
}

void insertFirstNameAndMarks(node &a, string name, int point){
	node tmp = makeNode(name, point);
	if(a == NULL){
		a = tmp;
	}
	else{
		tmp -> next = a;
		a = tmp;
	}
}

void DeleteFirstNameAndMarks(node &a){
	if(a == NULL){
		return;
	}
	else{
		a = a -> next;
	}
}
int countDiemSvKhacNhau(node a, int vmark){
	int count = 0;
	for(node p = a; p != NULL; p = p -> next){
		if(p -> point != vmark){
			count++;
		}
	}
	return count;
}
int main(int argc, char** argv) {
	node head = NULL;
	string sl;
	while(1){
		cin >> sl;
		if(sl == "ins"){
			string fullname;
			cin >> fullname;
			int marks;
			cin >> marks;
			insertFirstNameAndMarks(head, fullname, marks);
		}
		else{
			if(sl == "del"){
				DeleteFirstNameAndMarks(head);
			}
			else if(sl == "count"){
				int vmark;
				cin >> vmark;
				cout << countDiemSvKhacNhau(head, vmark) << endl;
			}
			else if(sl == "fin"){
				break;
			}
		}
	}
	return 0;
}
