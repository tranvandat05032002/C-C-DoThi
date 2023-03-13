#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	int count[26] = {0};
	string s;
	getline(cin, s);
	int dem = 0;
	int n = s.length();
	for(int i = 0; i < n; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			count[s[i] - 97]++;
			dem++;
		}
	}
	int max = 0;
	for(int i = 0; i < 26; i++){
//		max = ((count[i] + count[i+1]) + abs(count[i] - count[i+1]))/2;
//		cout << max << " " << char(i + 97);
//		break;
		for(int j = i + 1; j < dem; j++){
			if(count[i] < count[j]){
				int tmp;
				tmp = count[i];
				count[i] = count[j];
				count[j] = tmp;
			}
		}
	}
	return 0;
}
