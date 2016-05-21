#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

typedef pair< int, int > pii;

pii a[100005];

int main(){

	int N;

	scanf( "%d", &N );

	for( int i= 0; i< N; ++i )
		scanf( "%d%d", &a[i].ff, &a[i].ss );

	long long ans= 0;
	int min= 1000;

	for( int i= 0; i< N; ++i ){

		if( a[i].ss < min )
			min= a[i].ss;

		ans= ans + a[i].ff*min;

	}

	cout << ans << endl;

}