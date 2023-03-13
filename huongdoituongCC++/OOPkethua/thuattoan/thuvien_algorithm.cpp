#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

/*
max
min
min va max trong array va vector
*max_element
*min_element
accumulate

thuat toan xap xep
swap
sort
stable_sort

thuat toan tim kiem
find
binary_search
lower_search
upper_search
thu vien gan gia tri khoi tao mang
memset
fill
tron 2 vector
merge
convert 1 mang
reverse
thuat toan tap hop
set_union
set_intersection
set_difference
set_symetric_difference
*/

bool cmp(int a, int b){
	return abs(a) < abs(b);
}

int main(int argc, char** argv) {
	cout << "Min and max:" << endl;
	cout << max(2, 1) << endl;
	cout << min ({1, 2, 3, 4, -1}) << endl;
	vector <int> element_a= {1, 2, 3, 7, 5};
	cout << *max_element(element_a.begin(), element_a.end()) << endl;
	cout << *min_element(element_a.begin(), element_a.end()) << endl;
	cout << "thuat toan xap xep:" << endl;
	vector<int>sort_a = {3, -2, 2, -1, 1, 4, 5};
	sort(begin(sort_a), end(sort_a));
	for(int x : sort_a) cout << x << " ";
	cout << endl;
	vector<int>sort_b = {3, -2, 2, -1, 1, 4, 5};
	stable_sort(begin(sort_b), end(sort_b), cmp);
	for(int x : sort_b) cout << x << " ";
	cout << endl;
	cout << "gan gia tri cho array:" << endl;
	int memset_a[4] = {1, 2, 3, 4};
	memset(memset_a, 0, sizeof(memset_a));
	for(int x : memset_a) cout << x << " ";
	cout << endl;
	vector<int>fill_a = {1, 2, 3, 4, 5, 6};
	fill(fill_a.begin(), fill_a.end(), 1000);
	for(int x : fill_a) cout << x << " ";
	return 0;
}
