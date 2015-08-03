#include <bits/stdc++.h>

using namespace std;

#define all( v ) begin( v ), end( v )

vector< long long > v;

long long n;

void generate( long long x ){

	if( x <= n )
		v.push_back( x );
	else
		return;

	generate( x*10 + 4 );
	generate( x*10 + 7 );

}


int main(){

	cin >> n;

	generate( 0 );

	sort( all( v ) );

	cout << ( int ) ( lower_bound( all( v ), n ) - v.begin() ) << endl;

}