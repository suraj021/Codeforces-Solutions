#include <bits/stdc++.h>

using namespace std;

int boy[101];
int girl[101];

int main(){

	int n, m;

	scanf( "%d", &n );

	for( int i=0; i< n; ++i )
		scanf( "%d", &boy[i] );

	scanf( "%d", &m );

	for( int i=0; i< m; ++i )
		scanf( "%d", &girl[i] );

	sort( boy, boy + n );
	sort( girl, girl + m );

	int teams= 0;

	bool used[m];

	memset( used, 0, sizeof( used ) );	

	for( int i= 0; i< n; ++i )
		for( int j= 0; j< m; ++j ){

			//cout << i << " " << j << endl;

			if( abs( boy[i] - girl[j] ) <= 1 && used[j]== 0 ){
				teams++;		
				used[j]= 1;	

				//cout << "\t" << i<< " " << j << endl;

				break;
			}

		}


	cout << teams << endl;
}