#include <bits/stdc++.h>

using namespace std;

int h[101];

int main(){

	int n;

	scanf( "%d", &n );

	for( int i=0; i< n; ++i )
		scanf( "%d", &h[i] );

	int d;

	vector< int > v;

	for( int i=1; i< n-1; ++i ){

		int ans= INT_MIN;

		for( int j=0; j< n-1 ;  ){

			if( j+1== i ){

				d= h[j+2] - h[j];

				if( d > ans )
					ans= d;

				j+= 2;
			}else{

				d= h[j+1] - h[j];

				if( d > ans )
					ans= d;

				j+= 1;
			}

		}

		v.push_back( ans );
	}

	cout << *min_element( v.begin(), v.end() ) << endl;
}