#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	int mag;

	int count= 0;

	scanf( "%d", &n );

	int last= 0;

	while( n-- ){

		scanf( "%d", &mag );

		if( mag!= last ){
			count++;
		}

		last= mag;

	}

	cout << count << endl;
}