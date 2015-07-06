#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, k;
	long int v, x; 

	scanf( "%d%ld", &n, &v );

	int count= 0;

	set< int > si;

	for( int i=1; i<= n; ++i ){

		scanf( "%d", &k );

		while( k-- ){

			scanf( "%ld", &x );

			if( v > x ){
				si.insert( i );
			}
		}

	}

	set< int >::iterator itr;

		cout << si.size() << endl;

	for( itr= si.begin(); itr!= si.end(); ++itr )
		cout << *itr << " " ;

	cout << endl;

}