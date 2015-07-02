#include <bits/stdc++.h>

using namespace std;

int prize[55];

int main(){

	int n, m;

	scanf( "%d%d", &n, &m );

	for( int i=1; i<= m; ++i )
		scanf( "%d", &prize[i] );

	sort( prize + 1, prize + m + 1 );

	int low= INT_MAX;

	for( int i=1; i<= m-n+1; ++i ){

		int x= i + n - 1;

		int now= prize[x] - prize[i];

		if( now < low )
			low= now;
	}

	cout << low << endl;
}