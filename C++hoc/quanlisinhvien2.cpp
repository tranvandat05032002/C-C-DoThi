#include <bits/stdc++.h>
using namespace std;
#define test "Struct"
struct Thongtin{
    string Hoten, Gioitinh, Diachi, Sdt;
    int Namsinh;
};
//1, 2
void Input( Thongtin x[], int &n ){
    freopen(test".inp", "r", stdin);
    cin >> n; cin.ignore();
    for( int i = 1; i <= n; i++ ){
        getline(cin, x[i].Hoten);
        getline(cin, x[i].Gioitinh);
        getline(cin, x[i].Diachi);
        cin >> x[i].Namsinh; cin.ignore();
        getline(cin, x[i].Sdt);
    }
}
//3
void FindInfor(Thongtin x[], int n, string &sdt){
   cin >> sdt; cin.ignore();
   for(int i = 1; i <= n; i++ ){
       if( x[i].Sdt == sdt ){
           cout << x[i].Hoten    << "\n";
           cout << x[i].Gioitinh << "\n";
           cout << x[i].Diachi   << "\n";
           cout << x[i].Namsinh  << "\n";
           cout << x[i].Sdt      << "\n";
       }
   }
}
void swap1( string &a, string &b ){
    string s = a;
           a = b;
           b = s;
}
void SortandSolveSdt( Thongtin x[], int n ){
   for( int i = 1; i <= n; i++ ){
       for( int j = i + 1; j <= n; j++ ){
           if(x[i].Sdt > x[j].Sdt){
               swap1(x[i].Sdt, x[j].Sdt);
           }
       }
   }
   for( int i = 1; i <= n; i++ ) cout << x[i].Sdt << "\n";
}
void SortandSolveTen( Thongtin x[], int n ){
   for( int i = 1; i <= n; i++ ){
       for( int j = i + 1; j <= n; j++ ){
           if(x[i].Hoten > x[j].Hoten){
               swap1(x[i].Hoten, x[j].Hoten);
           }
       }
   }
   for( int i = 1; i <= n; i++ ) cout << x[i].Hoten << "\n";
}
Thongtin x[100]; int n; string sdt;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Input(x, n);
    FindInfor(x, n, sdt);
    SortandSolveSdt(x, n);
    SortandSolveTen(x, n);
    return 0;
}
