#include <bits/stdc++.h>

using namespace std;

map< int, int > tower;

int main(){

	int n, x;

	scanf( "%d", &n );

	while( n-- ){

		scanf( "%d", &x );

		tower[x]++;
	}

	map< int, int >::iterator  itr;

	int maxi= -1;

	for( itr= tower.begin(); itr!= tower.end(); ++itr )
		if( maxi < itr->second )
			maxi= itr->second;

	cout << maxi << " " << tower.size() << endl;

}