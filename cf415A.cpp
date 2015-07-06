#include <bits/stdc++.h>

using namespace std;

int l[101];
int t[101];

int main(){

	int n, m;

	memset( l, 1, sizeof( l ) );

	scanf( "%d%d", &n , &m );

	int i;

	while( m-- ){

		scanf( "%d", &i );

		int x= i;

		//cout << x << " \n\t";

		while( x<= n ){

			//cout << x << " ";

			if( l[x] ){

				l[x]= 0;
				t[x]= i;
			}

			++x;

		}

	}

	//cout << endl;

	for( int i=1; i<= n; ++i )
		cout << t[i] << " " ;

	cout << endl;

	return 0;
}