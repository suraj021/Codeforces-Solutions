#include <bits/stdc++.h>

using namespace std;

int x[201];
int y[201];

bool left( int x, int y, int x1, int y1 ){

	return ( ( x > x1 ) && ( y== y1 ) );
}

bool right( int x, int y, int x1, int y1 ){

	return ( ( x < x1 ) && ( y== y1 ) );
}

bool down( int x, int y, int x1, int y1 ){

	return ( ( x == x1 ) && ( y > y1 ) );
}

bool upper( int x, int y, int x1, int y1 ){

	return ( ( x == x1 ) && ( y < y1 ) );
}

int main(){

	int n;

	bool ln, rn, un, dn;

	int count= 0;

	scanf( "%d", &n );

	for( int i=0; i< n; ++i )
		scanf( "%d%d", &x[i], &y[i] );


	for( int i=0; i< n; ++i ){

		ln= rn= un= dn= false;

		for( int j=0; j< n; ++j ){

			if( upper( x[i], y[i], x[j], y[j] ) && !un)
				un= true;

			if( left( x[i], y[i], x[j], y[j] ) && !ln )
				ln= true;

			if( right( x[i], y[i], x[j], y[j] ) && !rn )
				rn= true;

			if( down( x[i], y[i], x[j], y[j] ) && !dn )
				dn= true;
		}

		if( un && ln && rn && dn )
			count++;
	}

	cout << count << endl;

	return 0;
}