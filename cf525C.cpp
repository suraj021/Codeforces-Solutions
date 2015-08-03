#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

long long int len[100001];

int main(){

	int N;

	vector< long long int > v;

	scanf( "%d", &N );

	for( int i=1; i<= N; ++i )
		cin >> len[i];

	// sort the length array

	sort( len+1, len+N+1 );

	// sort in descending array

	reverse( len+1, len+N+1 );

	for( int i=1; i<= N-1 ; i++ ){

		if( len[i]== len[i+1] || len[i]-1== len[i+1] ){
			v.push_back( min( len[i], len[i+1] ) ) ;
			i++;
		}

	}

	sort( v.begin(), v.end() );

	long long int  sum= 0;

	while( v.size()>= 2 ){

		sum+= ( v.back()*v[v.size()-2] );
		v.pop_back();
		v.pop_back();

	}
	
	printf( "%lld\n", sum );

	return 0;

}