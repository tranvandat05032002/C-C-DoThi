#include <bits/stdc++.h>
using namespace std;
struct Node{
    string fullName;
    int comment, nganhdanhgia;
    string hang;
    Node* next;
};
void ChuanHoa(string &s){
    s[0] = toupper(s[0]);
    for( int i = 1; i < s.size(); i++ ){
        if(s[i - 1] == ' ') s[i] = toupper(s[i]);
    }
}
int strmcpy(string &s, string &s1, string &s2){
    int count = 0;
    if(s1.size() > s2.size()) return 1;
    else if(s1.size() < s2.size()) return -1;
    else{
        for( int i = 0; i < s1.size(); i++ ){
            if(s1[i] == s2[i])count++;
        }
    }
    if(count == s1.size()) return 0;
}
typedef Node* node;
node makeNode(string fullName, int comment, int nganhdanhgia, string hang){
    node tmp = new Node();
    tmp -> fullName = fullName;
    tmp -> comment = comment;
    tmp -> nganhdanhgia = nganhdanhgia;
    tmp -> hang = hang;
    return tmp;
}
void insertLast(node &a, string fullName, int comment, int nganhdanhgia, string hang ){
    node tmp = makeNode(fullName, comment, nganhdanhgia, hang);
    if(a == nullptr) a = tmp;
    else{
        node p = a;
        while(p -> next != nullptr){
            p = p -> next;
        }
        p -> next = tmp;
    }
}
void Search(node &a, string name){

}
int main(){
    ios_base::sync_with_stdio(0); cout.tie(0); cout.tie(0);

}
