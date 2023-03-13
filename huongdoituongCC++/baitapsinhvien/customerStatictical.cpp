#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(int argc, char** argv) {
	int in[50];
	while(1){
		string select;
		cin >> select;
		if(select == "start"){
			while(1){
				string s;
				cin >> s;
				while(s != "5-5"){
					int t;
					cin >> t;
					in[s] = t;
				}
				if(s == "5-5") break;
			}
		}
		else if(select == "print"){
			for(int i = 0; i < 10; i++){
					cout << in[i]<< endl;
			}
		}
		else if(select == "end"){
			break;
		}
	}
	return 0;
}
