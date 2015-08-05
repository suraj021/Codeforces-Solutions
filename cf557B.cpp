#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	long int w;

	scanf( "%d%ld", &n, &w );

	vector< int > a( 2*n, 0 );

	for( int i= 0; i< 2*n; ++i )
		scanf( "%d", &a[i] );

	sort( a.begin(), a.end() );

	double gmin= min( a[0]*1.0, a[n]/2.0 );

	double ans= 3*gmin*n;

	ans= min( w*1.0, ans );

	printf("%0.9lf\n", ans );;

}