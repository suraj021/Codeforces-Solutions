#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

long a[100005];

int main(){

	int N;

	scanf( "%d", &N );

	for( int i= 1; i<= N; ++i )
		scanf( "%ld", &a[i] );

	long maxi= INT_MIN;

	for( int i= N; i>= 1; --i ){

		//cout << i << " " << a[i] << " " << maxi << " " ;

		if( a[i] > maxi ){
			maxi= a[i];
			a[i]= 0;
		}else if( a[i] < maxi ){
			a[i]= maxi - a[i] + 1;
		}else{
			a[i]= 1;
		}

		//cout << a[i] << endl;
	}

	for( int i= 1; i<= N; ++i )
		printf("%ld ", a[i] );

	printf("\n");
}