// codelearn 5
//#include <iostream>
//
//using namespace std;
//
//class Rectangle {
//    private:
//        double length;
//        double width;
//    public:
//        Rectangle();
//        void getInformation();
//        void display();
//        double getArea();
//        double getPerimeter();
//};
//Rectangle::Rectangle(){
//    this -> length = this -> width = 0;
//}
//void Rectangle::getInformation(){
//	cin >> width;
//	cin >> length;
//}
//double Rectangle::getArea(){
//	return width * length;
//}
//double Rectangle::getPerimeter(){
//	return (width + length) * 2;
//}
//void Rectangle::display(){
//	cout << "Area: " << getArea() << endl;
//	cout << "Perimeter: " << getPerimeter();
//}
//
//int main() {
//    Rectangle r1;
//    r1.getInformation();
//    r1.display();
//    return 0;
//}

//codelearn 6
//#include <iostream>
//
//using namespace std;
//
//class Student {
//    private:
//        string name;
//        int age;
//    public:
//        Student(string inputName, int inputAge);
//        void display();
//};
//Student::Student(string inputName, int inputAge){
//    name = inputName;
//    age = inputAge;
//}
//void Student::display(){
//	cout << "Name: " << name << endl;
//	cout << "Age: " << age << endl;
//}
//
//int main() {
//    Student s1("Long", 24);
//    Student s2("Kien", 29);
//    s1.display();
//    s2.display();
//    return 0;
//}

//codelearn 9

#include<bits/stdc++.h>
using namespace std;
class Student{
	private:
		string name;
		int age;
	public:
		Student(){
			this -> name = this -> age = 0;
		}
		void getInformation(){
			getline(cin, this -> name);
			cin >> this -> age;
		}
		void display(){
			cout << "Name: " << this -> name << endl;
			cout << "Age: " << this -> age;
		}
};
int main(){
	Student sv;
	sv.getInformation();
	sv.display();
	return 0;
}
