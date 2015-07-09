#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, p, q;

	scanf( "%d", &n );

	int count= 0;

	while( n-- ){

		scanf( "%d%d", &p, &q );

		if( q-p >= 2 )
			count++;
	}

	cout << count << endl;

}