#include <bits/stdc++.h>

using namespace std;

vector < pair < int, int > > vpii;

int main(){

	int n;

	scanf( "%d", &n );

	vpii.assign( n, pair < int, int >( 0, 0 ) );

	for( int i=0; i< n; ++i ){

		scanf( "%d", &vpii[i].first );
		vpii[i].second= i+1;
	}


	sort( vpii.begin(), vpii.end() );

	int	one, two, three;

	one= two= three= 0;

	for( int i=0; i< n; ++i ){

		if( vpii[i].first== 1 )
			one++;

		if( vpii[i].first== 2 )
			two++;

		if( vpii[i].first== 3 )
			three++;

	}

	int teams= min( one, min( two, three ) );

	if( one== 0 || two== 0 || three== 0 ){
		printf("0\n");
	}else{

		int x= 0;
		int y= one ;
		int z= y + two;

		printf("%d\n", teams );

		for( int i=1; i<= teams; ++i ){
			printf("%d %d %d\n",vpii[x].second, vpii[y].second, vpii[z].second );
			x++;
			y++;
			z++;
		}

	}


}