#include <iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv) {
	int a, b , c;
	a =10, b=11, c=15;
	float d;
	cin>>d;
	std::cout<<a<<" "<<b<<" "<<c<<" ";
	std::cout<<fixed<<setprecision(3)<<d;
	return 0;
}
