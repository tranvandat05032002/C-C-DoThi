#include<bits/stdc++.h>
using namespace std;
int N;
string decToBin(int n){
    string ans = "";
    while (n > 0) {
        ans = char (n % 2 + '0') + ans;
        n /= 2;
    }
    while (ans.length() < N)
        ans = "0" + ans;
    return ans;
}
int main(int argc, char** argv) {
	cin >> N;
    int N_2 = pow(2, N);
    for (int i = 0; i < N_2; i++)
        cout << decToBin(i) << endl;
	
	return 0;
}
