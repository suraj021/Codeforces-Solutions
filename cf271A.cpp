#include <bits/stdc++.h>

using namespace std;

string to_str( int i ){

	stringstream ss;

	ss << i;

	string s;

	ss >> s;

	return s;

}

set < char > sc;

bool distinct( int y ){

	string s= to_str( y );

	int len= s.length();

	sc.clear();

	for( int i=0; i< len; ++i )
		sc.insert( s[i] );

	if( len== sc.size() )
		return true;
	else
		return false;
}

int main(){

	int y;

	scanf( "%d", &y );

	y++;

	while( true ){

		if( distinct( y ) )
			break;

		y++;
	}

	cout << y << endl;

}