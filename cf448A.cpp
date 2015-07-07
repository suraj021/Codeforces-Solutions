#include <bits/stdc++.h>
using namespace std;

vector < vector< int > > vvi;

int main(){

	int a1, a2, a3;
	int b1, b2, b3;
	int n, k;

	scanf( "%d%d%d", &a1, &a2, &a3 );
	scanf( "%d%d%d", &b1, &b2, &b3 );
	scanf( "%d", &k );

	int sum1= a1 + a2 + a3;
	int sum2= b1 + b2 + b3;



	// for keeping cups

	if( sum1 > 5 ){
		if( sum1%5== 0 )
			n= sum1/5;
		else
			n= sum1/5 + 1;
	}
	else if ( sum1== 0 )
		n= 0;
	else
		n= 1;

	//cout << n << " ";

	if( sum2 > 10 ){
		if( sum2%10== 0 )
			n+= sum2/10;
		else
			n+= sum2/10 + 1;
	}
	else if( sum2!= 0 )
		n+= 1;
	else
		n+= 0;

	//cout << n << endl;

	if( n<= k )
		printf("YES\n");
	else
		printf("NO\n");
}