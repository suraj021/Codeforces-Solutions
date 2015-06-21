#include <bits/stdc++.h>

using namespace std;

int d[105];

int main(){

		int n, a, b;

		scanf( "%d", &n );

		for( int i=1; i< n; ++i )
			scanf( "%d", &d[i] );

		scanf( "%d%d", &a, &b );

		int year= 0;

		int i= a;

		while( a!= b ){

			a++;
			year+= d[i];
			i++;
		}

		cout << year << endl;
}