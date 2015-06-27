#include <bits/stdc++.h>

using namespace std;

map< pair< int, int >, int > mpi;

int main(){

	int n;

	scanf( "%d", &n );

	int x, y;

	for( int i=0; i< n; ++i ){

		scanf( "%d%d", &x, &y );

		mpi[ { x, y } ] ++;
	}

	map< pair< int, int >, int >::iterator it;

	int maxi= -1;

	for( it= mpi.begin(); it!= mpi.end(); ++it )
		if( it->second > maxi )
			maxi= it->second ;

	cout << maxi << endl;
}