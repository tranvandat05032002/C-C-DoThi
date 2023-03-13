#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	string id = "0000";
	for(int i = 1; i < 10; i++){
		id = id.insert(4, i);
	}
	cout<<id<<endl;
	return 0;
}
