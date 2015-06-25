#include <bits/stdc++.h>

using namespace std;

int main(){

	int k, sum= 0;

	int height[13];

	scanf( "%d", &k );

	for( int i=1; i<= 12; ++i ){

		scanf( "%d", height + i );
		sum+= height[i];
	}

	int ans= 0;

	if( k== 0 )
		printf("0\n");
	else if( sum < k )
		printf("-1\n");
	else if( sum == k ){

		int count= 0;

		for( int i=1; i<= 12; ++i )
			if( height[i]== 0 )
				count++;

		printf("%d\n", 12-count );

	}
	else{

		sort( height + 1, height + 13 );

		int h= 0, months= 0;

		for( int i= 12; i>=1; --i ){

			h+= height[i] ;

			months++;

			//cout << h << "   " << months << endl;

			if( h>= k )
				break;

		}

		printf("%d\n", months );

	}



}