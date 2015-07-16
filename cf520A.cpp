#include <bits/stdc++.h>

using namespace std;

set < char > sc;

int main(){

	int n;

	string s;

	scanf( "%d", &n );
	cin >> s;

	if( s.size() < 26 )
		printf("NO\n");
	else{

		for( int i=0; i< s.length(); ++i ){
		
			if( isupper( s[i] ) )
				s[i]= tolower( s[i] );
		
			sc.insert( s[i] );	
		}



		//cout << s << endl;

		//cout << sc.size() << endl;

		if( sc.size()== 26 )
			printf("YES\n");
		else
			printf("NO\n");
	}
}