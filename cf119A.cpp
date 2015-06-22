#include <bits/stdc++.h>

using namespace std;

int main(){

	int a, b, n;

	scanf( "%d%d%d", &a, &b, &n );

	int x;

	bool flag1, flag2;

	flag2= flag1= false;

	while ( true ){

		x= __gcd( n, a );

		//cout << n << "  " << x << endl;


		if( x > n ){

			flag1= true;
			break;
		}

		n= n - x;

		x= __gcd( n, b );

		if( x > n ){

			flag2= true;
			break;
		}

		n-= x;

		//cout << n << "  " << x << endl;
	}

	if( flag2 )
		printf("0\n");
	else
		printf("1\n");

}