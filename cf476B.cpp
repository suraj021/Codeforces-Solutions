#include <bits/stdc++.h>

using namespace std;

int main(){

	double fact[]= { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800 };

	string s, t;
	int p1, n1;
	int p2, n2;

	p1= n1= p2= n2= 0;

	cin >> s ;
	cin >> t ;

	for( int i=0; i< s.length(); ++i ){

		if( s[i]== '+' )
			p1++;
		else
			n1++;

	}

	for( int i=0; i< t.length(); ++i ){

		if( t[i]== '+' )
			p2++;
		else if( t[i]== '-' )
			n2++;
	}

	double a= ( p1 - p2 );
	double b= ( n1 - n2 );

	//cout << a << ' ' << b << endl;

	if( a== 0 && b== 0 ){
		printf("1.000000000000\n");
		return 0;
	}

	if( a < 0 || b < 0 ){
		printf("0.000000000000\n");
		return 0;
	}

	double n= fact[(int)(a+b)];	
	double d= fact[(int)a] * fact[(int)b];

	printf("%0.12f\n", ( 1l*n/d )/( 1 << (int)(a+b) ) );
}