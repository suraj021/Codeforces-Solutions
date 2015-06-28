#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back

typedef pair< int, int > pii;

vector< pii > vpii;

int main(){

	int n, h, g;
	int count= 0;

	scanf( "%d", &n );

	for( int i=0; i< n; ++i ){

		scanf( "%d%d", &h, &g );
		vpii.pb( mp( h, g ) );
	}

	for( int i=0; i< n; ++i ){
		for( int j= 0; j< n; ++j )
			if( vpii[i].first== vpii[j].second && i!= j)
				count++;

		//cout << count << endl;
	}

	cout << count << endl;

	return 0;

}