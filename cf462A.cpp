#include <bits/stdc++.h>

using namespace std;

char task[101][101];

int main(){

	int n;

	scanf( "%d", &n );

	for( int i=0; i< n; ++i )
		for( int j=0; j< n; ++j )
			cin >> task[i][j];

	for( int i= 0; i< n; ++i ){

		int count= 0;

		for( int j= 0; j< n; ++j ){

				if( i-1>=0 && j >= 0 && task[i-1][j]== 'o' )
					count++;

				if( i+1 < n && j < n && task[i+1][j]== 'o' )
					count++;

				if( i >= 0 && j-1 >= 0 && task[i][j-1]== 'o' )
					count++;

				if( i >= 0 && j+1 < n && task[i][j+1]== 'o' )
					count++;

				if( count%2!= 0 ){

					//cout << i << " " << j << endl;
					printf("NO\n");
					return 0;
				}

		}

	}

	printf("YES\n");

}