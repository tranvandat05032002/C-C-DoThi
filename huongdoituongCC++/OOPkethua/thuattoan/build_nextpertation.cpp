#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;
template<typename It>
bool next_permutation(It begin, It end){
	if(begin == end)
		return false;
		
	It i = begin;
	++i;
	if(i == end)
		return false;
		
	i = end;
	--i;
	while(true){
		It j = i;
		i--;
		if(*i < *j){
			It k = end;
			while(!(*i < *--k));
				iter_swap(i, k);
				reverse(j, end);
				return true;
		}
		if(i == begin){
			reverse(begin, end);
			return false;
		}
	}
}

int main(int argc, char** argv) {
	string s;
	cin >> s;
	sort( s.begin(), s.end() );
	int count = 0;
	vector < char > v;
	for(int i = 0; i < s.size(); i++){
		v.push_back( s[i] );
	}
	
	do{
		count++;
	}while(::next_permutation(v.begin(), v.end()));
	cout << count << endl;
	do{
		for(int i = 0; i < v.size(); i++){
			cout << v[i];
		}
		cout << endl;
	}while(::next_permutation(v.begin(), v.end()));
	return 0;
}
