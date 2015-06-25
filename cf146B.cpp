#include <bits/stdc++.h>

using namespace std;

vector< int > vi;

int lucky( int num ){

	while( num > 0 ){

		int rem= num%10;

		if( rem == 4 || rem== 7 )
			vi.push_back( rem );

		num= num/10;

	}

	int n= vi.size();

	int x= 0;

	int len= n;

	for( int i=0; i< len; ++i ){

		x+= vi[i] * pow( 10, i );
	}

	vi.clear();

	return x;
}

int main(){

	int a, b, x;

	scanf( "%d%d", &a, &b );

	for( a++; ; ++a )
		if( lucky( a ) == b )
			break;

	printf("%d\n", a );

}