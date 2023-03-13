#include<bits/stdc++.h>
using namespace std;

class Time{
	private:
		float hours, min, second;
	public:
		// constructor
		Time(){
			hours = min = second = 0;
		}
		friend istream& operator >> (istream &is, Time& x);
		friend ostream& operator << (ostream &os, Time& x);
		bool normalize();
		void advance();
};

bool Time::normalize(){
	if(hours < 0 || hours >= 24 || min < 0 || min >= 60 || second < 0 || second >= 60){
		cout << "Flse, you need nomarlize";
		return false;
	}
	return true;
}

void Time::advance(){
	while(this -> second >= 60){
		this -> min += 1;
		this -> second -= 60;
	}
	while(this -> min >= 60){
		this -> hours += 1;
		this -> hours -= 60;
	}
	while(this -> hours >= 24){
		this -> hours -= 24;
	}
}

istream& operator >> (istream &is, Time& x){
//	bool check = false;
//	while(!check){
		cout << "Enter hours:" << endl;
		is >> x.hours;
		cout << "Enter min:" << endl;
		is >> x.min;
		cout << "Enter second:" << endl;
		is >> x.second;
//		check = x.normalize();
//	}
}
ostream& operator << (ostream &os, Time& x){
	os << x.hours << ":" << x.min << ":" << x.second;
	cout << endl;
}

int main(int argc, char** argv) {
	Time x;
	cin >> x;
	x.advance();
	cout << x;
	return 0;
}
