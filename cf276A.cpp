#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;

	long int k, f, t;

	long int joy= INT_MIN;

	scanf( "%d%ld", &n, &k );

	long int curr_joy;

	while( n-- ){

		scanf( "%ld%ld", &f, &t );

		if( t > k )
			curr_joy= f - ( t - k );
		else
			curr_joy= f;

		joy= max( joy, curr_joy );

	}

	cout << joy << endl;

}