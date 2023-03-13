#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(int argc, char** argv) {
	string s;
	while(getline(cin, s)){
		if(s == "END"){
			break;
		}
		vector <int> number;
			for(int i = 0; i < s.length(); i++){
				if(s[i] >= 48 && s[i] <= 57){
					int res = 0;
					while(isdigit(s[i])){
						res = res * 10 + (int)s[i] - 48;
						i++;
					}
					number.push_back(res);
				}
		}
		int x = abs(number[0]);
		int y = abs(number[1]);	
		int count = 0;
			while(x < y && y / x == 2){
				x = x - 1;
				y = y - 2;
				count++;
			}
			while(x > y && x / y == 2){
				x = x - 2;
				y = y - 1;
				count++;	
			}
		cout << count << endl;
	}
	return 0;
}
