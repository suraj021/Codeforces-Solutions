#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define all( v ) ( v.begin(), v.end() )

typedef long int li;
typedef long long int lli;
typedef pair< int, int > pii;
typedef pair< long, long > pll;
typedef vector< int > vi;
typedef vector< pii > vpii;
typedef set< int > si;
typedef priority_queue< int, queue< int >, std::greater<int> > mpq;

int cities[105];
long votes[105][105];

map< int, int > freq;

int main(){

	int n, m;

	scanf( "%d%d", &n, &m );

	for( int i= 1; i<= m; ++i )
		for( int j= 1; j<= n; ++j )
			scanf( "%ld", &votes[i][j] );

	for( int city= 1; city<= m; ++city ){

		long maxi= INT_MIN;
		int id;

		for( int cand= 1; cand<= n; ++cand ){

			if( maxi < votes[city][cand] ){
				maxi= votes[city][cand];
				id= cand;
			}

			cities[city]= id;
		}
	}

	for( int city= 1; city<= m; ++city )
		freq[cities[city]]++;

	int maxi= INT_MIN;
	int id;

	for( auto it= freq.begin(); it!= freq.end(); ++it )
		if( it->ss > maxi){
			maxi= it->ss;
			id= it->ff;
		}

	printf("%d\n", id );
}


