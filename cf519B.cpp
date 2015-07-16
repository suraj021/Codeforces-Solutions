#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;

	int sum= 0;
	int sum1= 0;
	int sum2= 0;

	int x;

	scanf( "%d", &n );

	for( int i=0; i< n; ++i ){

		scanf( "%d", &x );

		sum+= x;
	}

	for( int i=0; i< n-1; ++i ){

		scanf( "%d", &x );

		sum1+= x;
	}

	for( int i=0; i<n-2; ++i ){

		scanf( "%d", &x );

		sum2+= x;
	}

	cout << sum-sum1 << endl;
	cout << sum1-sum2 << endl;


}