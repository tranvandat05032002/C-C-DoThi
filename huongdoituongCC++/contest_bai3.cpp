#include<bits/stdc++.h>
using namespace std;

struct Node{
	int mathang;
	int trongluong;
	int dongia;
	string tentraicay;
	Node* next;
};
typedef struct Node* node;
node makeNode(int mathang, int trongluong, int dongia, string tentraicay){
	node tmp = new Node();
	tmp -> mathang = mathang;
	tmp -> trongluong = trongluong;
	tmp -> dongia = dongia;
	tmp -> tentraicay = tentraicay;
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
void insertFirst(node &a, int mathang, int trongluong, int dongia, string tentraicay){
	node tmp = makeNode( mathang, trongluong, dongia, tentraicay);
	if(a == nullptr){
		a = tmp;
	}
	else{
		tmp -> next = a;
		a = tmp;
	}
}
void insertLast(node &a, int mathang, int trongluong, int dongia, string tentraicay){
	node tmp = makeNode(mathang, trongluong, dongia, tentraicay);
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
long long sumtraicay(node a, string nameTraicay){
	long long sum = 0;
	for(node p = a; p != nullptr; p = p -> next){
		if(p -> tentraicay == nameTraicay){
			sum += p -> trongluong * p -> dongia;
		}
	}
	return sum;
}
int main(){
  string lc;
  node a = nullptr;
  int mathang, trongluong, dongia; string tentraicay;
  while(cin >> lc){
      if(lc == "Add"){
          cin >> mathang >> trongluong >> dongia >> tentraicay;
          insertFirst(a, mathang, trongluong, dongia, tentraicay);
      }
      else if(lc == "Sum"){
          string nametraicay; cin >> nametraicay;
          cout << sumtraicay(a, nametraicay) << "\n";
      }
      else if(lc == "Fin") break;
  }
  return 0;
}