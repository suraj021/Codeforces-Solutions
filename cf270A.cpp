#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, p;

	scanf( "%d", &n );

	while( n-- ){

		scanf( "%d", &p );

		if( 360%(180-p)== 0 )
			printf("YES\n");
		else
			printf("NO\n");

	}

}