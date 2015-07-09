#include <bits/stdc++.h>

using namespace std;

vector< int > vi;
queue< int > q;

int main(){

	int N;

	scanf( "%d", &N );

	vi.assign( N+1, 0 );

	for( int i=1; i<= N; ++i )
		scanf( "%d", &vi[i] );

	int m, x;

	scanf( "%d", &m );

	for( int i=0; i< m; ++i ){

		scanf( "%d", &x );
		q.push( x );
	}

	vi[0]= 0;

	for( int i=1; i<=N; ++i )
		vi[i]+= vi[i-1];

	while( !q.empty() ){

		x= q.front();

		int i= lower_bound( vi.begin(), vi.end(), x ) - vi.begin();


		printf("%d\n", i );;

		q.pop();

	}


}