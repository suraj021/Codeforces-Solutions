#include <bits/stdc++.h>

using namespace std;

char cake[11][11];

int main(){

	int R, C;

	scanf( "%d%d", &R, &C );

	for( int i=0; i< R; ++i )
		for( int j=0; j< C; ++j )
			cin >> cake[i][j] ;

	int r= 0;
	int c= 0;

	for( int i=0; i< R; ++i )
		for( int j=0; j< C; ++j )
			if( cake[i][j]== 'S' ){
				r++;
				break;
			}

	for( int j=0; j< C; ++j )
		for( int i=0; i < R; ++i )
			if( cake[i][j]== 'S' ){

				c++;
				break;
			}

	cout << R*C - r*c << endl;

}