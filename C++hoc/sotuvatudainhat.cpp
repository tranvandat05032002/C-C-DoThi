#include <bits/stdc++.h>
using namespace std;
int main () {
	string s;
	getline (cin, s) ;
	int n=s.size(),dem=0,kitu=0,m=0;
	for (int i=0;i<n;i++) {
		if (isalpha(s[i])) {
			dem++;
		}
		else {
			m=max(dem,m);
			if (dem>0) {
				kitu++;
			}
			dem=0;
		}
	}
	m=max(dem,m);
	if (dem>0) {
		kitu++;
	}
	cout << m << endl << kitu << endl;
	return 0;
}
