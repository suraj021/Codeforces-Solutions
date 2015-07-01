#include <bits/stdc++.h>

using namespace std;

int a[101];

int main(){

	memset( a, 0, sizeof( a ) );

	int n, m, x, y;

	scanf( "%d", &n );

	for( int i=1; i<= n; ++i )
		scanf( "%d", &a[i] );

	scanf( "%d", &m );

	while( m-- ){

		scanf( "%d%d", &x, &y );

		a[x]-= y-1;

		if( x-1 >= 1 ){
			a[x-1]+= y-1;
		}

		a[x]--;

		if( x+1<= n )
			a[x+1]+= a[x];
		
		a[x]= 0;

	}

	for( int i= 1; i<= n; ++i )
			cout << a[i] << "\n";

}