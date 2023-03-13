#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	
	int t, n, m1, m2, m3, d;
	cin>>t;
	while(t--){
		cin>>n>>m1>>m2>>m3>>d;
		map<int , int>mp;
		mp[m1] = 1;
		mp[m2] = 1;
		mp[m3] = 1;
		
	int m11 = m1, m22 = m2, m33 = m3;
	
	while(d--){
		mp[m1 - 1] = 1;
		m1--;
		mp[m11 + 1] = 1;
		m11++;
		mp[m2 - 1] = 1;
		m2--;
		mp[m22 + 1] = 1;
		m22++;
		mp[m3 - 1] = 1;
		m3--;
		mp[m33 + 1] = 1;
		m33++;
	}
	int count = 0;
		for(int i = 1; i <= n ; i++){
			if(mp[i] == 0){
				count++;
			}
//			cout<<mp[i]<<" ";
		}	
		cout<<count<<endl;
	}
	return 0;
}
