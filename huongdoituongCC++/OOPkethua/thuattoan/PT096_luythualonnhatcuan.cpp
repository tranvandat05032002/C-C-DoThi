#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define ll long long
#define lf double
const ll N = 1e18;

int main(int argc, char** argv) {
	ll t, n, tmp;
	cin >> t;
	while(t--){
		cin >> n;
		if(n == 1 || n == -1 || n == 0){
			ll ans = 1;
			ans = ((n == 1 || n == -1) ? 1 : 0);
			cout << ans << endl;
		}
		else {
			ll tmp = n;
			n = abs(n);
			ll ans = n;
			int count = 1;
			while((lf)ans <= N / n){
				ans *= n; 
				count++;
			}
			if(tmp > 0){
				cout << ans << endl;
			}
			else{
				ll kq = (count & 1) ? ans / n : ans;
				cout << kq << endl;
			}
		}
	}
	return 0;
}



//#include<bits/stdc++.h>
//#include<cmath>
//using namespace std;
//#define ll long long
//#define lf double
//const ll N = 1e18;
//
//int main(int argc, char** argv) {
//	ll t, n, tmp;
//	cin >> t;
//	while(t--){
//		cin >> n;
////		tmp = n;
////		n = abs(n);
////		ll ans = n;
////		int count = 1;
//		if(n == 1 || n == -1 || n == 0){
//			ll ans = 1;
//			ans = ((n == 1 || n == -1) ? 1 : 0);
//			cout << ans << endl;
//		}
//		else if(n > 0){
//			ll ans = n;
//			while((lf)ans <= N / n){
//				ans *= n; 
////				count++;
//			}
//			cout << ans << endl;
////			ll kq = (tmp > 0) ? pow(n, count) : pow(n, count - 1);
////			cout << kq << endl;
//		}
//		else{
//			n = -n;
//			ll ans = n;
//			ll count = 1;
//				while((lf)ans <= N / n){
//				ans *= n; 
//				count++;
//			}
//			if(count & 1) ans /= n;
//			cout << ans << endl;
//		}
//	}
//	return 0;
//}
