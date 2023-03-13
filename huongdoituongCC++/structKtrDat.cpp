#include <bits/stdc++.h>
using namespace std;
struct QLSV{
    string Name;
    int Mark;
};
struct Node{
    QLSV sv;
    Node* next;
};
typedef Node* node;
node MakeNode(){
    QLSV sv;
    cin >> sv.Name >> sv.Mark;
    node tmp = new Node();
    tmp -> sv = sv;
    tmp -> next = nullptr;
    return tmp;
}
void insertFirst(node &a, QLSV sv ){
    node tmp = MakeNode();
	if(a == NULL){
		a = tmp;
	}
	else{
		tmp -> next = a;
		a = tmp;
	}
}
void DeleteFirst( node &a ){
	if(a == nullptr) return;
    a = a -> next;
}
int CountMark( node &a, int &mark ){
    node p = a; int cnt = 0;
    while( p != nullptr ){
        if(p -> sv.Mark != mark) cnt++;
        p = p -> next;
    }
    return cnt;
}
int main(){
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    node head = nullptr; QLSV sv;
    string s;
    while( cin >> s ){
        if(s == "ins"){
            insertFirst(head, sv);
        }
        else if( s == "del") DeleteFirst(head);
        else if( s == "count"){
            int x; cin >> x;
            cout << CountMark(head, x) << "\n";
        }
        else if( s == "fin") break;
    }
    return 0;
}
