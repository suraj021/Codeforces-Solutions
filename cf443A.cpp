#include <bits/stdc++.h>

using namespace std;

set< char > sc;

int main(){

	string s;

	getline( cin, s );

	for( int i=0; i < s.length(); ++i )
		if( 'a' <= s[i] && s[i] <= 'z' )
			sc.insert( s[i] );

	cout << sc.size() << endl;

}