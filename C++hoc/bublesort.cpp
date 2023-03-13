#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}
//void bubblesort(int in[], int lenght){
//	int n = lenght;
//	while(n>0){
//		int newn = 0;
//		for(int i = 1; i<n; i++)
//			if(in[i-1] > in[i]){
//				std::swap(in[i-1], in[i]);
//				newn = i;
//				
//			}
//			n = newn;
//	}
//}
void bubblesort(int *in, int lenght, int (*pcomparision) (int, int)){
	int n = lenght;
	while(n>0){
		int newn=0;
		for(int i=1; i<n; i++)
		
			if(pcomparision(in[i-1], in[i])>0){
				std::swap(in[i-1], in[i]);
				newn = i;
			}
		n = newn;
	}
}
int ascending(int a, int b){
	return a>b;
}
int descending(int a, int b){
	return a<b;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int in[n];
	for(int i = 0; i<n; i++){
		cin>>in[i];
	}
	bubblesort(in, n, ascending);
	for(int i=0; i<n; i++){
		cout<<in[i]<<" ";
	}
	return 0;
}
