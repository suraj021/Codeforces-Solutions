#include <bits/stdc++.h>

using namespace std;

vector< pair< int, int > > vpii;

int main(){

	int n, k;
	int x;

	scanf( "%d%d", &n, &k );

	for( int i=1; i<= n; ++i ){

		scanf( "%d", &x );
		vpii.push_back( pair< int, int >( x, i ) );
	}

	sort( vpii.begin(), vpii.end() );

	int sum= 0;
	int count= 0;
	vector < int > vi; 

	for( int i=0; i< n; i++ ){

		sum+= vpii[i].first;

		if( sum > k ){

			sum-= vpii[i].first;
			break;
		}

		count++;
		vi.push_back( vpii[i].second );
	}

	cout << count << endl;

	for( int i=0; i< count; ++i )
		cout << vi[i] << " ";

	cout << endl;

}