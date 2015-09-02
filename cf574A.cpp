#include <bits/stdc++.h>

using namespace std;

int arr[105];

int main(){
	
	int N;
	priority_queue< int > pq;

	scanf( "%d", &N );

	int maxi= INT_MIN;
	int sum= 0;

	int x;

	for( int i= 0; i< N; ++i ){

		scanf( "%d", &arr[i] );

		if( i )
			pq.push( arr[i] );

		sum+= arr[i];

		if( maxi < arr[i] )
			maxi= arr[i];
	}

	int first= arr[0];

	while( true ){

		int top= pq.top();
		pq.pop();

		if( first > top )
			break;	
		
		--top;
		++first;

		pq.push( top );
	}

	printf("%d\n", first-arr[0] );
}