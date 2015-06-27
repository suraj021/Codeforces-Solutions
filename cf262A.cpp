#include <bits/stdc++.h>

using namespace std;

int lucky( long n ){

	int r;
	int count= 0;

	while( n > 0 ){

		r= n%10;

		if( r== 4 || r== 7 )
			count++;

		n/= 10;
	}

	return count;

}

int main(){

	int n, k;
	int count= 0;
	long x;

	scanf( "%d%d", &n, &k );

	while( n-- ){

		cin >> x;

		if( lucky( x ) <= k )
			count++;
	}

	cout << count << endl;
}