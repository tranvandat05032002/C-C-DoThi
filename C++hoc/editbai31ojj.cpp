#include <iostream>

#include <math.h>
using namespace std;
int main(){
	int n; 
	cin >> n; 
	int x[n],y[n]; 
	long long res(0),tongx(0),tongy(0),s(0);  
	for (int i=1;i<=n;i++){ 
		cin >> x[i] >> y[i]; 
	} 
	for (int i=1;i<=n;i++){ 
		res+=(n-1)*pow(x[i],2)+(n-1)*pow(y[i],2); 
	} 
	for (int i=2;i<=n;i++){ 
		tongx+=x[i-1]; tongy+=y[i-1]; 
		s+=-2*tongx*x[i]-2*tongy*y[i]; 
	} 
	cout <<res+s; 
	return 0;
	}
