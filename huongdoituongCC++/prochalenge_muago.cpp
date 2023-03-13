#include<bits/stdc++.h>
using namespace std;
int t;
int in[10];
//void solve(){
//	for(int i = 0; i < 7; i++){
//		cin >> in[i];
//	}
//	sort(in, in + 7);
//	for(int i = 0; i < 4; i++){
//			for(int j = i + 1; j < 5; j++){
//				for(int k = j + 1; k < 6; k++){
//					if((in[i] + in[j] + in[k]) == in[6]){
//						cout << in[i] << " " << in[j] << " " << in[k] << " " << endl;
//						return;
//					}
//				}
//			}
//		}
//}

int main(int argc, char** argv) {
	cin >> t;
	while(t--){
		
		for(int i = 0; i < 7; i++){
		cin >> in[i];
	}
	sort(in, in + 7);
		for(int i = 0; i < 4; i++){
				for(int j = i + 1; j < 5; j++){
					for(int k = j + 1; k < 6; k++){
						if((in[i] + in[j] + in[k]) == in[6]){
							cout << in[i] << " " << in[j] << " " << in[k] << " " << endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}
