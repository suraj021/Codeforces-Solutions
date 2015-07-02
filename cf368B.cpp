#include <bits/stdc++.h>

using namespace std;

int a[100005];
int sum[100005];

set< int > s;

int main(){

	int n, m, l, x;

	scanf( "%d%d", &n, &m );

	memset( a, 0, sizeof( a ) );

	pair< set<int>::iterator, bool > rt;

	a[0]= 0;

	int j= 2;

	for( int i= 1; i<= n; ++i ){

		scanf( "%d", &a[i] );

		

	}

	a[n+1]= 0;

	for( int i= n; i>= 1; --i ){

		rt= s.insert( a[i] );

		if( rt.second )
			a[i]= a[i+1] + 1;
		else
			a[i]= a[i+1];
	}

	while( m-- ){

		scanf( "%d", &l );

		cout << a[l] << endl;
	}
}