#include <iostream>
#include<iomanip>
using namespace std;

struct sinhvien{
	string name, course, birthDay;
	string id;
	float scores;
};

void input(sinhvien &sv){
	getline(cin, sv.name);
	sv.id = "D20CQCN04-B";
	cin>>sv.course;
	cin>>sv.birthDay;
	cin>>sv.scores;
	
	string tmp = "";
	if(sv.birthDay[1] == '/'){
		sv.birthDay = "0" + sv.birthDay;
	}
	if(sv.birthDay[4] == '/'){
		sv.birthDay.insert(3, "0");
	}
}
void printf(sinhvien sv){
	cout<<sv.name<<" "<<sv.id <<" "<<sv.course<<" "<<sv.birthDay<<" "<< fixed << setprecision(2) <<sv.scores;
}

int main(int argc, char** argv) {
	struct sinhvien sv1;
	input(sv1);
	printf(sv1);
	return 0;
}
