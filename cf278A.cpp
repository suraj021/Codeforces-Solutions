#include <bits/stdc++.h>

using namespace std;

int dist[101];

int main(){

	int N, x, y;

	scanf( "%d", &N );

	for( int i=1; i<= N; ++i )
		scanf( "%d", &dist[i] );

	scanf( "%d%d", &x, &y );

	if( !( x < y ) ){

	}

	int h;

	int d1= 0;
	int d2= 0;

	// straight

	for( h= x; h!= y; h= (h+1)%(N+1) ){

		//cout << h << " ";

		d1+= dist[h];
	}

	// circle

	for( h= y; h!= x; h= (h+1)%(N+1) ){

		//cout << h << " ";
		d2+= dist[h];
	}

	//cout << "\n" << d1 << " " << d2 << endl;

	printf("%d\n", min( d1, d2 ) );
}