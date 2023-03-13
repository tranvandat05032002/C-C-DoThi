#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	string kytu;
	getline(cin, kytu);
	long long res;
	vector<int>in;
	for(int i=0; i<kytu.size();){
		if(kytu[i] >='0' && kytu[i] <= '9'){
			while(i<kytu.size() && isdigit(kytu[i])){
				res = res*10 + kytu[i++] - '0';
			}
			in.push_back(res);
		}
		else if(kytu[i] == '-' || kytu[i] == '_' || kytu[i] == ',' || kytu[i] == ';' || kytu[i] == '.' || kytu[i] == '/' || kytu[i] == '|'){
			i += 1;
			res = 0;
		}
		else{
			i++;
		}
	}
	cout<<abs(in[1] - in[0])*1200;
	return 0;
}
