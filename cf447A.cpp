#include <bits/stdc++.h>

using namespace std;

set< int > s;

int main(){

	int p, n;
	long x;

	scanf( "%d%d", &p, &n );

	pair< set< int >::iterator, bool > rt;
	
	for( int i= 1; i<= n; ++i ){

		cin >> x;

		rt= s.insert( x%p );

		if( !rt.second ){
			printf("%d\n", i );
			return 0;
		}

	}

	printf("-1\n");

	return 0;

}