//#include <iostream>
//using namespace std;
//
//int main(int argc, char** argv) {
//	int a, b;
//	cin >> b >> a;
//	int tong = b/a;
//	int so = a*tong;
//	std::cout<<so;
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	for(int i=a; i<=1000; i++){
		if(i%a==0 && i>b){
			std::cout<<i;
			break;
		}
	}
}
