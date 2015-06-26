#include <bits/stdc++.h>

using namespace std;

multimap< int, int > dragon;

int main(){

	int s, n;
	int x, y;

	scanf( "%d%d", &s, &n );

	for( int i=0; i< n; ++i ){

		scanf( "%d%d", &x, &y );

		dragon.insert( { x, y} );
	}

	multimap< int, int >::iterator itr;

	itr= dragon.begin();

	bool lose= false;

	while( itr!= dragon.end() ){

		if( itr->first >= s ){
			lose= true;
			break;
		}

		s+= itr->second;

		++itr;
	}

	if( !lose )
		printf("YES\n");
	else
		printf("NO\n");

}