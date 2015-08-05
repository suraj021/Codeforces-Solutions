#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

// some typedefs

//typedef unsigned long long int ulli;
typedef long long int lli;
typedef long long ll;
typedef pair < int, int > pii;
typedef vector< int > vi;
typedef vector< char > vc ;
typedef vector< pii > vpii;
typedef set< int > si;
typedef priority_queue< int > pq;
typedef priority_queue<int, std::vector<int>, std::greater<int> > mpq;

const double PI = 3.1415926535897932384626433832795028841971;

// some macros

#define PINF INT_MAX
#define NINF INT_MIN

#define f 			      first
#define s 	              second
#define pb                push_back
#define mp 		          make_pair			// instead use { };
#define init( x, v )	  memset( x, v, sizeof x )

//freopen( "inputLA.in", "r", stdin );
//freopen( "outputLA.txt", "w", stdout );
// __gcd( 2, 4 );

int state[505][505];
int n, m, q;

int solve(){

	int maxi= NINF;
	int count= 0;

	int ans, cur;

	for( int i=1; i<= n; ++i ){

		ans= 0;
		cur= 0;

		for( int j=1; j<= m; ++j ){

			if( state[i][j]== 0 ){
				cur= 0;
			}else{
				cur++;
			}

			ans= max( ans, cur );

		}

		maxi= max( maxi, ans );
	}

	return maxi;
}

int main(){

	scanf( "%d%d%d", &n, &m, &q );

	for( int i=1; i<= n; ++i )
		for( int j=1; j<= m; ++j ){
			scanf( "%d", &state[i][j] );
		}


	int x, y;

	while( q-- ){

		scanf( "%d%d", &x, &y );

		if( state[x][y]== 1 )
			state[x][y]= 0;
		else
			state[x][y]= 1;


		cout << solve() << "\n";;

	}

}
