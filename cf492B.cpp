#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

double lamps[1001];

int main(){

	int n;
	long int l;

	scanf( "%d%ld", &n, &l );

	for( int i=0; i< n; ++i )
		cin >> lamps[i];

	sort( lamps, lamps + n );

	double diff= INT_MIN;

	for( int i=1; i< n; ++i ){

		if( lamps[i] - lamps[i-1] > diff )
			diff= lamps[i] - lamps[i-1];
	}

	double ans= max( lamps[0] , max( diff/2, l - lamps[n-1] ) );

	cout << std::fixed;
	cout << std::setprecision(10) << ans << "\n";

}