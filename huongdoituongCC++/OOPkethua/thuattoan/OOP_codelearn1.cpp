#include <iostream>

using namespace std;

class Student {
    private:
        string name;
        int age;
    public:
        void getInformation(){
            getline(cin, name);
            cin >> age;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age;
        }
    
};

int main() {
    Student s1;
    s1.getInformation();
    s1.display();
    return 0;
}
