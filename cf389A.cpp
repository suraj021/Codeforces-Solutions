#include <bits/stdc++.h>

using namespace std;

int num[101];

int main(){

	int n;
	int sum= 0;

	scanf( "%d", &n );

	for( int i=0; i< n; ++i){

		scanf( "%d", &num[i] );
	}

	int g= 0;

	for( int i=0; i< n; ++i )
		g= __gcd( g, num[i] );

	cout << g*n << endl;

}