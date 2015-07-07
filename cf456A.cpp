#include <bits/stdc++.h>

using namespace std;

vector< pair < int, int > > vpii;

int main(){

	int n;

	scanf( "%d", &n );

	vpii.assign( n, { 0, 0 } );

	for (int i = 0; i < n; ++i)
		scanf( "%d%d", &vpii[i].first, &vpii[i].second );

	sort( vpii.begin(), vpii.end() );

	for( int i=0; i < n-1; ++i )
		if( vpii[i].first < vpii[i+1].first && vpii[i].second > vpii[i+1].second ){

			printf("Happy Alex\n");
			return 0;
		}

	printf("Poor Alex\n");

}