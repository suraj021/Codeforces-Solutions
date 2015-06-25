#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, x;
	int even, odd;
	int sum= 0;

	even= odd= 0;

	scanf( "%d", &n );

	while( n-- ){

		scanf( "%d", &x );

		if( x%2== 0 )
			even++;
		else
			odd++;

		sum+= x;
	}

	//cout << sum << endl;

	if( sum%2== 0 )
		cout << even << endl;
	else
		cout << odd << endl;



}