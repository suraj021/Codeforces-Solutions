#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;

	int low= 0;
	int high= 0;

	cin >> s;

	for( int i=0; i< s.length(); ++i )
		if( islower( s[i] ) )
			low++;
		else
			high++;

	if( high > low ){

		for( int i=0; i< s.length(); ++i )
			s[i]= islower( s[i] )?toupper( s[i] ):s[i] ;

		cout << s << endl;
	}else{

		for( int i=0; i< s.length(); ++i )
			s[i]= isupper( s[i] )?tolower( s[i] ): s[i] ;

		cout << s << endl;
	}


}