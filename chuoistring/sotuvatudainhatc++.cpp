#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	string kytu;
	getline(cin, kytu);
	int dem=0;
	int m=0;
	int d=0;
	for(int i=0; i<kytu.size(); i++){
		if(isalpha(kytu[i])){
			dem++;
		}
		else{
			m=max(dem, m);
			if(dem>1)
				d++;
				dem=0;
		}
	}
	m=max(dem, m);
	if(dem>0){
		d++;
	}
	cout<<m<<endl<<d;
	return 0;
}
