#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string z){
	while(z[0]==' '){
		z.erase(0,1);
	}
	while(z[z.size()-1]==' '){
		z.erase(z.size()-1,1);
	}
	while(z.find("  ")!=-1){
		z.erase(z.find("  "),1);
	}
	for(char &x:z){
		x=tolower(x);
	}
	z[0]=toupper(z[0]);
	for(int i=1;i<z.size()-1;i++){
		if(z[i]==' '){
			z[i+1]=toupper(z[i+1]);
		}
	}
	return z;
}
string ten;
int main(){
	vector<string>str;
	while(getline(cin,ten)){
		if(ten=="*") break;
		ten=chuanhoa(ten);
		string tmp=""; string fullname=""; string nametmp="";
		for(int i=ten.size()-1;i>=0;i--){
			if(ten[i]==' ') break;  
			tmp+=ten[i];
			ten.erase(i,1);
		}
		reverse(all(tmp));
		for(char &x : tmp){
			x=toupper(x);
		}
		fullname = tmp + ' ' + ten;
		str.pb(fullname);
	}
	sort(all(str));
	for(string x : str){
		cout<<x<<endl;
	}
}
