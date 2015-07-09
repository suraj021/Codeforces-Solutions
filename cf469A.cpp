#include <bits/stdc++.h>

using namespace std;

set <int> si;

int main(){

	int n;
	int p, x;

	scanf( "%d", &n );
	scanf( "%d", &p );

	while( p-- ){

		scanf( "%d", &x );

		si.insert( x );
	}

	scanf( "%d", &p );

	while( p-- ){

		scanf( "%d", &x );

		si.insert( x );
	}

	if( si.size()== n )
		printf("I become the guy.\n");
	else
		printf("Oh, my keyboard!\n");


}