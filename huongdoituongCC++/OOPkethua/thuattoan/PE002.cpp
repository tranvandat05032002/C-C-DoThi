#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main(int argc, char** argv) {
	int n;
	cin >> n;
	vector<int>savePow;
	for(int i = 2; i <= n; i++){
		for(int j = 2; j <= n; j++){
			savePow.push_back(pow(i, j));
		}
	}
	sort(savePow.begin(), savePow.end());
	int countDuplicate = 0;
	for(int i = 0; i < savePow.size(); i++){
		if(savePow[i] == savePow[i+1]){
			countDuplicate++;
		}
		cout << savePow[i] << " ";
	}
	cout << endl;
	cout << savePow.size() - countDuplicate;
	return 0;
}
