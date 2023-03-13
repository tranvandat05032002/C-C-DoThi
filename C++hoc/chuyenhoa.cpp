#include<bits/stdc++.h>
using namespace std;
int main(){
	int demT=0; 
	int demH = 0;
	string s;
	while(getline(cin,s)){
//		for( char &x : s) {
//		   if(x>='A'&&x<='Z') dem++; 
//		}
//		if(dem>(s.size()-dem)){
//		    for(char &x:s){
//				if(x>='a'&&x<='z')
//				x-=32; 
//			}
//		}
//		else{
//			for(char &x:s){
//				if(x>='A'&&x<='Z')
//				x+=32; 	
//			}
//		}
//	    for(char &x:s)
//		cout<<x;
//	cout<<endl;
		for(int i=0; i<s.size(); i++){
			if(isupper(s[i])){
				demH++;
			}
			if(islower(s[i])){
				demT++;
			}
		}
		string kytu = "";
		if(demH > demT){
			 for (int i=0;i<s.length();i++)
			kytu += toupper(s[i]);
		}
		else{
			for (int i=0;i<s.length();i++)
			kytu += tolower(s[i]);
		}
		cout<<kytu<<endl;
	}
	return 0;
}
