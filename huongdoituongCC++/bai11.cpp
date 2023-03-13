#include<bits/stdc++.h>
using namespace std;

struct data{
    int maso;
    string holot;
    string ten;
    int ngaycong;
    int dongia;
};

struct Node{
    data nhanvien;
    Node* next;
};

typedef struct Node* node;

node makeNode(){
    data nhanvien;
    cin>>nhanvien.maso;
    cin.ignore();
    getline(cin, nhanvien.holot);
    getline(cin, nhanvien.ten);
    cin>>nhanvien.ngaycong;
    cin>>nhanvien.dongia;
    node tmp = new Node();
    tmp -> nhanvien = nhanvien;
    tmp -> next = nullptr;
    return tmp;
}

int size(node a){
    int count  = 0;
    while(a == nullptr){
        count ++;
        a =  a -> next;
    }
    return count;
}
bool empty(node a){
    return a == nullptr;
}

void insertFirst(node &a, data nhanvien){
    node tmp = makeNode();
    if(a == nullptr){
        a = tmp;
    }
    else{
        tmp -> next = a;
        a = tmp;
    }
}
void insertLast(node &a, data nhanvien){
    node tmp = makeNode();
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
void deleteFirst(node &a, data nhanvien){
    if(a == nullptr){
        return;
    }
    else{
        a = a -> next;
    }
}
void deleteLast(node &a, data nhanvien){
    if(a == nullptr){
        return;
    }
    node truoc = nullptr;
    node sau = a;
    while(sau -> next != nullptr){
        truoc = sau;
        sau = sau -> next;
    }
    truoc -> next = nullptr;
    delete sau;
}

void deleteMiddle(node &a, data nhanvien, int pos){
    int n = size(a);
    if(pos <= 0 || pos > n + 1){
        return;
    }
    node truoc = nullptr;
    node sau = a;
    for(int i = 1; i < pos-1; i++){
        truoc = sau;
        sau = sau -> next;
    }
    truoc -> next = sau -> next;
    delete sau;
}

void deleteAll(node &a, data nhanvien, int &pos){
    int n = size(a);
    cin>>pos;
    if(pos == n){
        deleteLast(a, nhanvien);
    }
    else if(pos == 1){
        deleteFirst(a, nhanvien);
    }

    // midd
    else{
        //int n = size(a);
        if(pos <= 0 || pos > n + 1){
            return;
        }
        node truoc = nullptr;
        node sau = a;
        for(int i = 1; i < pos-1; i++){
            truoc = sau;
            sau = sau -> next;
        }
        truoc -> next = sau -> next;
        delete sau;
    }
}

void deleteWithID(node &a, data nhanvien, int &pass){
    cin >> pass;
    node p = a;
    int index = 0;
    while(p != nullptr){
        index++;
        if(p -> nhanvien.maso == pass){
            deleteAll(p, nhanvien, index);
        }
        p = p -> next;
    }
}

long long salary(node &a, data nhanvien){
    long long sumSalary = 0;
    for(node p = a; p != nullptr; p = p -> next){
        sumSalary += p -> nhanvien.ngaycong * p -> nhanvien.dongia;
    }
    return sumSalary;
}

void input(int &n,node &a, data nhanvien){
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++){
        insertLast(a, nhanvien);
    }
}

void output(node &a){
    node p = a;
    while(p != nullptr){
        cout << p -> nhanvien.maso <<" "<<endl;
        cout << p -> nhanvien.holot <<" "<<endl;
        cout << p -> nhanvien.ten <<" "<<endl;
        cout << p -> nhanvien.ngaycong <<" "<<endl;
        cout << p -> nhanvien.dongia <<" "<<endl;
        p = p -> next;
    }
}

int main() {
    node head = nullptr;
    data nhanvien;
    int n;
    int pass;
    input(n, head, nhanvien);
//    insertFirst(head, nhanvien);
    // insertLast(head, nhanvien1);
     deleteWithID(head, nhanvien, pass);

     //deleteLast(head, nhanvien, );
     //deleteMiddle(head, nhanvien, pos);
     output(head);
    // cout<<"tong luong cua nhan vien:"<<salary(head, nhanvien1);
    return 0;
}
