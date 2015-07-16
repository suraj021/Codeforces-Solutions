#include <bits/stdc++.h>

using namespace std;

int table[11][11];
int n;

void form(){

	for( int i=1; i<=11; ++i )
		table[i][1]= 1;

	for( int j=1; j<= 11; ++j )
		table[1][j]= 1;

	for( int i=2; i<= 11; ++i )
		for( int j= 2; j<= 11; ++j )
			table[i][j]= table[i-1][j] + table[i][j-1];

	return;
}

int main(){

	form();

	scanf( "%d", &n );

	cout << table[n][n] << endl;

}