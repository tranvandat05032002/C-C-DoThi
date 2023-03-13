#include <bits/stdc++.h>
using namespace std;

class Person{
    private:
        string name, address;
    public:
        Person(){
            name = address = "";
        }

        string getName();
        string getAddress();

        void setName(string name){
            this -> name = name;
        }
        void setAddress(string address){
            this -> address = address;
        }

        void in(){
            cout << name << " " << address << endl;
        }
};
string Person::getName(){
    return this -> name; 
}
string Person::getAddress(){
    return this -> address;
}

// ke thua

class Student : public Person{
    private:
        double gpa;
    public:
        Student(){
            gpa = 0;
        }
        float getGpa(){
            return gpa;
        }
        float settGpa(float gpa){
             this -> gpa = gpa;
        }
        void in(){
            cout << getName() << " " << getAddress() << " " << fixed << setprecision(2) << gpa << endl; 
        }
};

int main(){
    Student a;
    a.setName("Tran Van Dat");
    a.setAddress("4/8 Tu Xuong");
    a.settGpa(4.0);
    a.in();
    return 0;
}
