#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int n, k;
	cin>>n>>k;
	cin.ignore(n,'\n');
	string kytu;
	while(n--){
		getline(cin, kytu);
		for(int i=0; i<kytu.size(); i++){
			if(isupper(kytu[i])){
				if(kytu[i] + k> 'Z'){
					kytu[i] -= 26;
					kytu[i]+=k;
				}
				else{
					kytu[i] += k;
				}
			}
		}
		cout<<kytu<<endl;
	}
	return 0;
}
