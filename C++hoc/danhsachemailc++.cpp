#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	string kytu;
	while(getline(cin, kytu)){
		string email = "";
		int j = 0;
		email.push_back(tolower(kytu[0]));
		for(int i = 0; i < kytu.length(); i++){
			if(kytu[i] == ' '){
				j = i+1;
				email.push_back(tolower(kytu[j]));
			}
		}
		email = email + kytu.substr(j + 1) ;
		cout<<email<< "@huscmain.edu.vn"<<endl;
	}
	return 0;
}
