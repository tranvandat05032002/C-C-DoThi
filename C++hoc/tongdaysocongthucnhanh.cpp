#include <iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	long long tong= 1ll*n*(n+1)/2;
	std::cout<<tong;
	return 0;
}
