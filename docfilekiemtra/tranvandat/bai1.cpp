#include<bits/stdc++.h>
//#include<fstream>
#define test "bai1"
using namespace std;

int main(int argc, char** argv) {
	freopen(test".inp", "r", stdin);
	freopen(test".out", "w", stdout);
	int n;
	cin >> n;
//	ifstream fin;
//	fin.open("bai1.inp");
//	fin>>n;
//	fin.close();

	int in[n];
	int max = 0;
	int indexMax = 0;
	int min = 1e9;
	int indexMin = 0;
	for(int i = 0; i < n; i++){
//		fin>>in[i];
		cin>>in[i];
	}
	for(int i = 0; i < n; i++){
		if(in[i] > max){
			max = in[i];
			indexMax = i;
		}
	}
	for(int i = 0; i < n; i++){
		if(in[i] < min){
			min = in[i];
			indexMin = i;
		}
	}
	cout<<abs(indexMax - indexMin);
//	ofstream fout;
//	fout.open("bai1.out");
//	fout << indexMax - indexMin;
	return 0;
}
