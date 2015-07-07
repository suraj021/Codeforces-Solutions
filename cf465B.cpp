#include <bits/stdc++.h>

using namespace std;

int l[1001];

int main(){

	int n;

	scanf( "%d", &n );

	for( int i= 0; i< n; ++i )
		scanf( "%d", &l[i] );

	int move= 0;

	int i;

	for( i=0; i< n; ++i )
		if( l[i] )
			break;

	//cout << i << endl;

	for( int j= i; j< n;  ){

		if( l[j] ){
			move++;

			//cout << j << "\n\t";

			if( l[j+1]== 0 ){

				int k;
				int x= j+1;

				for( k= 0; k< n-j; ++k ){
					if( l[x] )
						break;
					x++;
				}	
	
				if( l[x] )
					move+= 1;

				j+= k+1;

				//cout << j << endl;

				continue;
			}

		}

		j++;

		//cout << " " << move << endl;

	}

	cout << move << endl;

}