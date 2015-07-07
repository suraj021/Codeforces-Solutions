#include <bits/stdc++.h>

using namespace std;

vector < long int > vli;

int main(){

	int n;
	long int x;

	scanf( "%d", &n );

	vli.assign( n, 0 );

	for( int i=0; i< n; ++i ){

		scanf( "%ld", &vli[i] );
	}

	long maxi= *max_element( vli.begin(), vli.end() );
	long mini= *min_element( vli.begin(), vli.end() );

	long diff= maxi- mini;

	long long ans;

	int freqlow= count( vli.begin(), vli.end(), mini );
	int freqhigh= count( vli.begin(), vli.end(), maxi );

	if( maxi== mini ){

		ans= 1LL*n*( n -1 )/2;
	}else{

		ans= ( 1LL * freqhigh * freqlow );
	}

	cout << diff << " " << ans << endl;
}