#include <bits/stdc++.h>

using namespace std;

map< int, int > dish;

int main(){

	int n, b, p;
	int x;

	int wash= 0;

	scanf( "%d%d%d", &n, &b, &p );

	for( int i=0; i< n; ++i ){

		scanf( "%d", &x );

		if( x== 1 ){		// dish 1;

			if( b== 0 )		// no bowls left
				wash++;
			else
				b--;
		}else{

			if( p!= 0 )
				p--;
			else if( b!= 0 )
				b--;
			else
				wash++;

		}

	} 

	cout << wash << endl;

}