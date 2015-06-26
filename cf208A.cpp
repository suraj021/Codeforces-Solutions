#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;

	cin >> s;

	int x;

	while( ( x= s.find( "WUB" ) )!= string::npos ){

		s.replace( x, 3, " " );
	}

	while( s[0]== ' ' ){

		s= s.erase( 0, 1 );

	}

	string ans= "";

	char last= '1';

	for( int i= 0; i< s.size(); ++i ){

		if( last== ' ' && s[i]== ' ' ){
			continue;
		}

		ans+= s[i]; 
		last= s[i];
	}

	cout << ans << endl;
}