#include <bits/stdc++.h>

using namespace std;

char m[301][301];

int main(){

	int n;

	scanf( "%d", &n );

	for( int i=1; i<= n; ++i )
		for( int j=1; j<= n; ++j )
			cin >> m[i][j];

	char d1= m[1][1];
	char d2= m[1][n];

	int j, i;

	for( i=1, j= 1; i<= n; ++i ){

		if( m[i][j]!= d1 ){

			//cout << "F " << i << " " << j << endl; 

			printf("NO\n");
			return 0;
		}

		j++;
	}

	for( j=n, i=1; j>= 1; --j ){

		if( m[i][j]!= d2 ){

			//cout << "S " << i << " " << j << endl; 

			printf("NO\n");
			return 0;
		}

		i++;
	}

	char c= m[1][2];

	if( c== d1 || c== d2 ){

		printf("NO\n");
		return 0;
	}

	int sum= 1 + n;

	for( i=1; i<= n; ++i )
		for ( j=1; j<= n; ++j ){

			if( i== j )
				continue;
			if( i + j== n + 1 )
				continue;

			if( m[i][j]!= c ){

				//cout << "T " << i << " " << j << endl;

				printf("NO\n");
				return 0;
			}

		}

	printf("YES\n");

	return 0;

}