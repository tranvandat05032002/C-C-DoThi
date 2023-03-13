#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
private:
    string ma, name, lop, email;

public:
    SinhVien()
    {
        ma = name = lop = email = "";
    }
    friend istream &operator>>(istream &is, SinhVien &);
    friend ostream &operator<<(ostream &os, SinhVien);

    string getLop()
    {
        return this->lop;
    }
    string getMa()
    {
        return this->ma;
    }
};

istream &operator>>(istream &is, SinhVien &a)
{
    is >> a.ma;
    is.ignore();
    getline(is, a.name);
    is >> a.lop;
    is >> a.email;
};
ostream &operator<<(ostream &os, SinhVien a)
{
    os << a.ma << " " << a.name << " " << a.lop << " " << a.email << endl;
};

void viethoa(string &s)
{
    for (char &x : s)
        x = toupper(x);
}

string convert(string s){
    stringstream ss(s);
    vector < string > v;
    string token;
    string res = "";
    while(ss >> token){
        v.push_back(token);
    }
    for(int i = 0; i < 2; i++){
        res += toupper(v[i][0]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    map<string, vector<SinhVien>> mp;
    for (int i = 0; i < n; i++)
    {
        SinhVien tmp;
        cin >> tmp;
        mp[tmp.getMa().substr(5, 2)].push_back(tmp);
    }
    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string s;
        getline(cin ,s);
        viethoa(s);
        cout << "Danh Sach Sinh Vien Nganh" << s << ":\n";

        string ng = convert(s);
        if(ng == "CN" || ng == "AT"){
            for(SinhVien x : mp[ng]){
                if(x.getMa().find("E") != string :: npos){
                    cout << x;
                }
            }
        }
        else{
            for(SinhVien x : mp[ng]){
                cout << x;
            }
        }
    }
    return 0;
}