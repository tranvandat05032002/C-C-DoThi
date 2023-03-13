#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
	int n;
	cin >> n;
	set < int > distinct;
	int in[n];
	for(int i = 0; i < n; i++){
		cin >> in[i];
		distinct.insert(in[i]);
	}
	for(auto it : distinct) cout << it << " ";
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int in[n];
	for(int i = 0; i < n ; i++){
		cin >> in[i];
	}
	sort(in, in +n);
	for(int i = 0; i < n; i++){
		if(in[i] != in[i + 1]){
			cout << in[i] << " ";
		}
	}
	return 0;
}
