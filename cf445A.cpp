#include <bits/stdc++.h>
using namespace std;

char c[101][101];
int n, m;

bool is_valid( int i, int j ){

	return ( i>= 1 && i<= n && j>= 1 && j<= m );

}

int main(){

	

	scanf( "%d%d", &n, &m );

	for( int i= 1; i<= n; ++i )
		for( int j= 1; j<= m; ++j )
			cin >> c[i][j];

	for( int i= 1; i<= n; i++ )
		for( int j= 1; j<= m; ++j ){

			if( c[i][j]== '.' ){

				if( ( j+i )%2== 0 )
					c[i][j]= 'W';
				else
					c[i][j]= 'B';

			}

		}

	for( int i= 1; i<= n; ++i ){
		for( int j= 1; j<= m; ++j )
			cout << c[i][j];

		cout << endl;
	}


}
