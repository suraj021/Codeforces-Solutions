#include <bits/stdc++.h>

using namespace std;

int race[102][102];

int main(){

	int n;

	scanf( "%d", &n );

	for( int i=1; i<= n; ++i )
		for( int j= 1; j<= n; ++j )
			scanf( "%d", &race[i][j] );

	int ans;

	vector< int > v;

	int counter= 0;

	for( int i=1; i<= n; ++i ){

		bool flag= false;

		for( int j= 1; j<= n; ++j ){

			if( i!= j ){

				if( race[i][j]== 1 || race[i][j]== 3 ){
					flag= true;
					break;
				}

			}

		}

		if( !flag ){

			counter++;
			v.push_back( i );
		}

	}

	cout << counter << endl;

	if( v.size()!= 0 ){

		for( int i=0; i< v.size(); ++i )
		cout << v[i] << " " ;

		cout << endl;
	}

}