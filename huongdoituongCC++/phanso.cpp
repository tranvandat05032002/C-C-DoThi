#include <iostream>
#define ll long long
using namespace std;

inline ll gcd(ll a, ll b){ ll r; while(b){r = a % b; a = b; b = r;}return a;}
inline ll Icm(ll a, ll b){ return a/gcd(a , b) * b;}

// struct
struct phanso{
	ll tu;
	ll mau;
};
void nhap(phanso &p){
	cin>>p.tu>>p.mau;
}
void rutgon(phanso &p){
	ll l = gcd(p.tu, p.mau);
	p.tu /= l;
	p.mau /= l;
}
void inphanso(phanso p){
	cout<< p.tu<<"/"<<p.mau<<endl;
}

phanso tong(phanso a, phanso b){
	ll mc = Icm(a.mau, b.mau);
	a.tu = mc / a.mau + a.tu;
	b.tu = mc / b.mau + b.tu;
	a.tu += b.tu;
	a.mau = mc;
	rutgon(a);
	return a;
}

int main(int argc, char** argv) {
	struct phanso p, q;
	nhap(p);
	nhap(q);
	phanso t = tong(p,q);
	inphanso(t);
	return 0;
}
