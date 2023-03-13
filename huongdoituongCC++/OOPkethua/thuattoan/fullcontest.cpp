//doi so ra gio
//#include<bits/stdc++.h>
//#define FOR(i,a,b) for(int i=a;i<=b;i++)
//typedef long long ll;
//typedef double db;
//typedef unsigned long int uln;
//using namespace std;
//int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	ll n;
//	cin >> n;
//	if(n >= 0 && n <= 86399){
//		ll hour = n / 3600;
//		ll min = n % 3600 / 60;
//		ll second = n % 3600 % 60;
//		printf("%02lld:%02lld:%02lld", hour, min, second);
//	}
//	return 0;
//}


//// dung it nhat 1 dieu kien
//#include<bits/stdc++.h>
//#define FOR(i,a,b) for(int i=a;i<=b;i++)
//typedef long long ll;
//typedef double db;
//typedef unsigned long int uln;
//using namespace std;
//int main(){
//	ll n;
//	cin >> n;	
//	if( n & 1 || n > 0 && (n >= 100 && n <= 999)){
//		cout << "Yes";
//	}
//	else{
//		cout << "No";
//	}
//	return 0;
//}


// kiem tra thuoc khoang
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	float x;
//	cin >> x;
//	if(x >= 0 && x <= 25) cout << "Interval [0,25]";
//	else if(x > 25 && x <= 50) cout << "Interval (25,50]";
//	else if(x > 50 && x <= 75) cout << "Interval (50,75]";
//	else if(x > 75 && x <= 100) cout << "Interval (75,100]";
//	else cout << "Out of Intervals";
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int l1, r1, l2, r2;
//	cin >> l1 >> r1 >> l2 >> r2;
//	if(r1 < l2) cout << "-1";
//	else{
//		cout << max(l1, l2) << " " << min(r1, r2);
//	}
//	return 0;
//}

//// set_intersection
//#include<bits/stdc++.h>
//#include<vector>
//#include <algorithm>
//#include<set>
//#define FOR(i,a,b) for(int i=a;i<=b;i++)
//typedef long long ll;
//typedef double db;
//typedef unsigned long int uln;
//using namespace std;
//int main(){
//	ll l1, r1, l2, r2;
//	cin >> l1 >> r1 >> l2 >> r2;
//	vector <ll> arr1;
//	vector <ll> arr2;
//	vector <ll> arr3; 
//	for(int i = l1; i <= r1; i++){
//		arr1.push_back(i);
//	}
//	for(int i = l2; i <= r2; i++){
//		arr2.push_back(i);
//	}
//	set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), std::back_inserter(arr3));
//	if(arr3.empty()){
//		cout << -1;
//	}
//	else{
//		cout << arr3[0] << " " << arr3[arr3.size() - 1];
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define FOR(i,a,b) for(int i=a;i<=b;i++)
//typedef long long ll;
//typedef double db;
//typedef unsigned long int uln;
//ll mod(ll a, ll b){
//	return (a % 100 * b % 100) % 100;
//}
//int main(){
//	unsigned long long a, b, c, d;
//	cin >> a >> b >> c >> d;
//	ll result = (mod(a, mod (b, mod(c, d))));
//	if(result < 10) cout << 0 << result;
//	else cout << result;
//	return 0;
//}

//tam giac V2

//#include<bits/stdc++.h>
//#define FOR(i,a,b) for(int i=a;i<=b;i++)
//typedef long long ll;
//typedef double db;
//typedef unsigned long int uln;
//using namespace std;
//int main(){
//	string a, b, c;
//	cin >> a >> b >> c;
//	while(a.size() > 11){
//		a.erase(a.size() - 1);	
//	} 
//	while(b.size() > 11){
//		b.erase(b.size() - 1);
//	}
//	while(c.size() > 11){
//		c.erase(c.size() - 1);
//	}
//	if(a == b && a == c){
//		cout << "Tam giac deu";
//	}
//	else if(a == b || b == c || a == c){
//		cout << "Tam giac can";
//	}
//	else{
//		cout << "Tam giac thuong";
//	}
//	return 0;
//}

// dem toa tau

//#include<bits/stdc++.h>
//#define FOR(i,a,b) for(int i=a;i<=b;i++)
//typedef long long ll;
//typedef double db;
//typedef unsigned long int uln;
//using namespace std;
//int main(){
//	ll khach, khoang;
//	cin >> khach >> khoang;
//	if(khach % (khoang * 4) == 0) cout << (khach / (khoang * 4));
//	else cout << (khach / (khoang * 4)) + 1;
//	return 0;
//}

// chinh xac mot dieu kien

//#include<bits/stdc++.h>
//#define FOR(i,a,b) for(int i=a;i<=b;i++)
//typedef long long ll;
//typedef double db;
//typedef unsigned long int uln;
//using namespace std;
//int main(){
//	ll n;
//	cin >> n;
//	int count = 0;
//	if(n < 0 && n % 3 == 0){
//		count ++;
//	}
//	if(n % 2 == 0){
//		count ++;
//	}
//	if(count == 1){
//		cout << "Yes";
//	}
//	else{
//		cout << "No";
//	}
//	if((n < 0 && n % 3 == 0) && n % 2 == 0){
//		cout << "No";
//	}
//	else if(((n < 0 && n % 3 == 0) && n % 2 != 0) || (n > 0 || n % 3 != 0) && n % 2 == 0){
//		cout << "Yes";
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//#define FOR(i,a,b) for(int i=a;i<=b;i++)
//typedef long long ll;
//typedef double db;
//typedef unsigned long int uln;
//using namespace std;
//int main(){
//	ll x, y;
//	ll in[3];
//	cin >> in[0] >> in[1] >> in[2] >> x >> y;
//	sort(in + 0, in + 3);
//	if(in[0] <= x && in[1] <= y || in[0] <= y && in[1] <= x)cout << "Yes";
//	else cout << "No";
//	return 0;
//}


