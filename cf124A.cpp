#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	int a, b;

	scanf( "%d", &n );
	scanf( "%d%d", &a, &b );

	int count= 0;

	for( int A= a; A < n; ++A )
		for( int B= b; B>= 0; B--)
			if( A + B + 1 == n )
				count++;

	cout << count << endl;

}