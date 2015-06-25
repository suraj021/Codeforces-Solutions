#include <bits/stdc++.h>

using namespace std;

int affected[100005];

int main(){

	int k, l, m, n, d;

	scanf( "%d", &k );
	scanf( "%d", &l );
	scanf( "%d", &m );
	scanf( "%d", &n );
	scanf( "%d", &d );

	memset( affected, 0, sizeof( affected ) );

	for( int i=1; i<= d; ++i )
		if( i%k== 0 || i%l== 0 || i%m== 0 || i%n== 0 )
			affected[i]= 1;

	int count= 0;

	for( int i= 1; i<= d; ++i )
		if( affected[i] )
			count++;

	printf("%d\n", count );

}