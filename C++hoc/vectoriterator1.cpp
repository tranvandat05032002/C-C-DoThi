#include <bits/stdc++.h>
using namespace std;
void xapxep(int in[], int n){
	for(int i=0; i<n-1;i++){
		for(int j=0; j<n; j++){
			if(in[i]<in[j]){
				int tmp = in[i];
				in[i] = in[j];
				in[j] = tmp;
			}
		}
	}
}

int main(int argc, char** argv) {
//	vector<int>in;
//	in.push_back(13);
//	in.push_back(23);
//	in.push_back(33);
//	cout<<in[0]<<endl;
//	cout<<in[in.size()-1]<<endl;
//	cout<<in.back()<<endl;
//	for(int i=0; i<in.size(); i++){
//		cout<<in[i]<<endl;
//	}
//	for(int x : in){
//		cout<<x<<endl;
//	}
//	for(vector<int> :: iterator it = in.begin(); it!=in.end(); it++){
//		cout<<*it<<endl;
//	}
//	for(auto it=in.begin(); it!=in.end(); it++){
//		cout<<*it<<endl;
//	}cout<<*(in.end()-1);
	int n;
	cin>>n;
	vector<int>in(n);
	for(int i=0; i<n; i++){
//		int x;
//		cin>>x;
//		in.push_back(x);
	    cin>>in[i];
	}
	xapxep(in, n);	
	for(int x : in){
		cout<<x<<" ";
	}
	for(auto it = in.begin(); it!=in.end(); it++){
		cout<<*it<<" ";
	}
	for(vector<int> :: iterator it = in.begin(); it!=in.end(); it++){
		cout<<*it<<" ";
	}
	return 0;
}
