#include<bits/stdc++.h>

using namespace std;


int main(){
   char s[80];
   int dem =0, max = 0;
   while(gets(s)){
   	for(int i=0; i < strlen(s); i++){
   	   if((s[i] >= 'a' && s[i] <= 'z') || s[i] =='\'' || (s[i] >= 'A' && s[i] <= 'Z')){
    		dem ++;
		}
		if(s[i] || s[i] =='.' || s[i] == ',' || s[i] ==';' ||s[i] == ':' || s[i] == ' ' || i == (strlen(s)-1)){
			if(dem > max){
				max = dem;
			}
			dem = 0;
		}
    }
    cout << max << endl;
    max =0;
    dem = 0;
   }
   
}
