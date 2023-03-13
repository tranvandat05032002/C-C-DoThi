#include <bits/stdc++.h>
using namespace std;

class Person{
    private:
        string name, address;
    public:
        Person(){
            name = address = "";
        }

        void nhap();

        string getName();
        string getAddress();

        void setName(string name){
            this -> name = name;
        }
        void setAddress(string address){
            this -> address = address;
        }

        void in(){
            cout << name << " " << address;
        }
};
string Person::getName(){
    return this -> name; 
}
string Person::getAddress(){
    return this -> address;
}
void Person::nhap(){
    getline(cin , name);
    getline(cin , address);
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
        void nhap(){
            Person::nhap();
            cin >> gpa;
        }
        void in(){
        	cout << "Day la sinh vien: \n";
        	Person::in();
            cout << " " << fixed << setprecision(2) << gpa << endl; 
        }
};

// giao vien ke thua person

class teacher : public Person{
    private:
        string chuyennganh;
        int age;
    public:
        teacher(){
            chuyennganh = "";
            age = 0;
        }
        
        void nhap(){
        	Person::nhap();
        	getline(cin, chuyennganh);
        	cin >> age;
		}
		void in(){
			cout << "Day la giao vien: \n";
			Person::in();
			cout << " " << chuyennganh << " " << age;
		}
};


int main(){
    Student a;
    teacher b;
    a.nhap();
    a.in();
    b.nhap();
    b.in();
    return 0;
}

