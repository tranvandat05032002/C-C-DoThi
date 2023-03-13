#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

ll lmc(ll a, ll b){
	return a / gcd(a, b) * b;
}

class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(){
			
		}
		PhanSo(ll tu , ll mau);
		friend istream &operator >> (istream &is, PhanSo&);
		friend ostream &operator << (ostream &os, PhanSo);
		
		friend PhanSo operator + (PhanSo, PhanSo);
		void rutgon();
};

PhanSo::PhanSo(ll tu, ll mau){
	this -> tu = tu;
	this -> mau = mau;
}

istream &operator >> (istream &is, PhanSo &a){
	is >> a.tu >> a.mau;
}
ostream &operator << (ostream &os, PhanSo a){
	os << a.tu << "/" << a.mau << endl;
	return os;
}

void PhanSo::rutgon(){
	ll g = gcd(tu, mau);
	tu /= g;
	mau /= g;
}
PhanSo operator +(PhanSo a, PhanSo b){
	PhanSo tong;
	ll mc = lmc(a.mau, b.mau);
	tong.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
	tong.mau = mc;
	ll g = gcd(tong.tu, tong.mau);
	tong.tu /= g;
	tong.mau /= g;
	return tong;
} 

int main(int argc, char** argv) {
//	PhanSo p(1, 1);
//	cin >> p;
//	p.rutgon();
//	cout << p;
	
	PhanSo p(1, 1), q(1, 1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
