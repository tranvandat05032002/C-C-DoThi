#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
template<typename It>
bool next_permutation(It begin, It end)
{
        if (begin == end)
                return false;
 
        It i = begin;
        ++i;
        if (i == end)
                return false;
 
        i = end;
        --i;
 
        while (true)
        {
                It j = i;
                --i;
 
                if (*i < *j)
                {
                        It k = end;
 
                        while (!(*i < *--k))
                                /* pass */;
 
                        iter_swap(i, k);
                        reverse(j, end);
                        return true;
                }
 
                if (i == begin)
                {
                        reverse(begin, end);
                        return false;
                }
        }
}
 
int main()
{
       string s; cin >> s;
	sort( s.begin(), s.end() );
	int cnt = 0;
	vector < char > v;
	for( int i=0; i<s.size(); i++){
		v.push_back( s[i] );
	}

	do{
		cnt++;
	} while( ::next_permutation (v.begin(), v.end()));
cout << cnt << endl;
	do{
		for( int i=0; i< v.size(); i++){
			cout << v[i];
		}
		cout << endl;
	} while( ::next_permutation( v.begin(), v.end()));
	
	return 0;
}
