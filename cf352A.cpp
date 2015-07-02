#include <bits/stdc++.h>

using namespace std;

inline string to_str( int i ){ stringstream ss; ss << i; string s; ss >> s; return s; }

map< int , int > m;

int main(){

	int n, x;

	scanf( "%d", &n );

	while( n-- ){

		scanf( "%d", &x );

		m[x]++;
	}

	if( m[0]== 0 ){

		printf("-1\n");
		return 0;

	}else{

		n= m[5];

		while( true ){

			int sum= 5*n;


			if( sum%9== 0 ){

				break;
			}

			n--;

			if( n== 0 )
				break;

		}

		string ans= "";

		if( n== 0 ){

			ans= "0";
		}else{

			for( int i=1; i<= n; ++i ){

				ans+= to_str( 5 );
				
			}

			//cout << ans << endl;

			for( int i=1; i<= m[0]; ++i ){

				ans+= to_str( 0 );
			}
		}

		cout << ans << endl;

	}

}