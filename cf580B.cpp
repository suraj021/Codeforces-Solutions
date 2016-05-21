#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define all( v ) ( v.begin(), v.end() )

priority_queue< long long > pq;
pair< long, long > arr[100005];

int main(){

	int N;
	long d;

	scanf( "%d%ld", &N, &d );

	for( int i= 1; i<= N; ++i )
		scanf( "%ld%ld", &arr[i].ff, &arr[i].ss );

	sort( arr+1, arr+N+1 );

	long long sum[N+2];

	sum[0]= 0;

	for( int i= 1; i<= N; ++i )
		sum[i]= sum[i-1] + arr[i].ss;

	//for( int i= 1; i<= N; ++i )
	//	cout << sum[i] << " " ;

	//cout << endl;

	int j= 1;
	long long maxi= 0;

	for( int i= 1; i<= N; ++i ){
		
		while( j <= N ){

			if( arr[j].ff - arr[i].ff >= d )
				break;

			++j;
		}

		--j;

		maxi= max( maxi, sum[j]-sum[i-1] );

		//cout << i << " " << j << endl;

	}

	printf( "%lld\n", maxi );

}