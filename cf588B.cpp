#include <bits/stdc++.h>

using namespace std;

long long primeFactors( long long N ){

	set<long long > sl;

	while( N%2== 0 ){
		N/= 2;
		sl.insert( 2 );
	}

	long long i= 3;

	while( i <= sqrt( N ) ){

		while( N%i== 0 ){
			N/= i;
			sl.insert( i );
		}

		i+= 2;
	}

	if( N > 2 )
		sl.insert( N );

	long long ans=1 ;

	for( auto i : sl ){
		ans*= i;
	}

	return ans;
}

int main(){

	long long N;

	scanf( "%lld", &N );

	printf("%lld\n", primeFactors( N ) );
}