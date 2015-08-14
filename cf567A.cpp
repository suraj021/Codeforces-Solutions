#include <bits/stdc++.h>

using namespace std;

typedef long int li;

li x[100005];

int main(){

	int n;

	scanf( "%d", &n );

	for( int i= 0; i< n; ++i )
		scanf( "%ld", &x[i] );

	for( int i= 0; i< n; ++i ){

		if( i== 0 ){
			cout << abs( x[1]-x[0] ) << " " << abs( x[n-1] - x[0] ) << endl;
			continue;
		}

		if( i== n-1 ){
			cout << abs( x[n-1]-x[n-2] ) << " " << abs( x[n-1] - x[0] ) << endl;
			continue;
		}

			cout << min( abs( x[i]-x[i-1] ), abs( x[i]-x[i+1] ) ) << " " << max( abs( x[i]-x[n-1] ), abs( x[i]-x[0] ) ) << endl;

	}

	return 0;
}