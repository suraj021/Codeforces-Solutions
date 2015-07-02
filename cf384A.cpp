#include <bits/stdc++.h>

using namespace std;

char chess[1001][1001];

int main(){

	int N;

	scanf( "%d", &N );

	int counter= 0;

	for( int i=1; i<= N; ++i ){
		for( int j=1; j<= N; ++j ){

			if( i%2!= 0 && j%2== 0 || i%2==0 && j%2!= 0 )
				chess[i][j]= '.';
			else
				chess[i][j]= 'C';

		}
	}

	for( int i= 1; i <= N; ++i )
		for( int j=1; j<= N; ++j )
			if( chess[i][j]== 'C' )
				counter++;

	printf("%d\n", counter );

	for( int i=1; i<= N; ++i ){
		for( int j=1; j<= N; ++j )
			printf("%c", chess[i][j] );
		cout << endl;
	}

	return 0;
}	