#include<bits/stdc++.h>
using namespace std;
void setIO(){
	cin.tie(0)->sync_with_stdio(0);
}
int main(int argc, char** argv) {
	setIO();
	string kytu;
	while(cin>>kytu){
		set<int>ans;
		for(int i=0; i<kytu.size()-2; i++){
			int tmp = atoi(kytu.substr(i,3));
			int leng = log10(tmp) +1;
			if(leng == 3){
				ans.insert(tmp);
			}
		}
		cout<<ans.size()<<endl;
	}
	return 0;
}
