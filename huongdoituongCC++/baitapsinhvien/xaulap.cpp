#include<bits/stdc++.h>
using namespace std;
int checkRepeat(string s){
	int index = 0;
	int c = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[0] == s[i] && i != 0){
			c++;
			index = i / c;
		}
	}
	if(c){
		int count = 0;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == s[i + index] && s.length() == index * (c + 1)){
				count++;
			}
			else{
				break;
			}
		}
		if(count == index * c){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		return 0;
	}
}

int main(int argc, char** argv) {
	int count = 0;
	while(true){
		string s;
		getline(cin, s);
		if(checkRepeat(s) == 1){
			count++;
		}
	}
	cout << count;
	return 0;
}
