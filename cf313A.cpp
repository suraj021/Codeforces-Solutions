#include <bits/stdc++.h>

using namespace std;

inline string to_str( int i ){ stringstream ss; ss << i; string s; ss >> s; return s; }

int main(){

	string s;

	long int n;

	scanf( "%ld", &n );

	s= to_str( n );

	int len= s.length();

	if( n < 0 ){

		if( s[len-1] > s[len-2] ){

			s.erase( s.end() - 1 );
		}else{
			s.erase( s.end() - 2 );
		}

		if( s.length()== 2 && s[1]== '0')
			cout << s[1] << endl;
		else
			cout << s << endl;

	}else{

		printf("%ld\n", n );
	}



}