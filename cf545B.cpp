#include <bits/stdc++.h>

using namespace std;

int main(){

	string s, t;
	string ans;

	int dist= 0;

	cin >> s >> t;

	for( int i= 0; i< s.length(); ++i )
		if( s[i]!= t[i] )
			dist++;

	if( dist%2!= 0 ){
		printf("impossible\n");
		return 0;
	}

	int even= 0;

	for( int i=0; i< s.length(); ++i ){

		if( s[i]== t[i] )
			cout << s[i] ;
		else{

			if( even%2== 0 )
				cout << s[i] ;
			else
				cout << t[i] ; 

			even++;

		}

	}




}