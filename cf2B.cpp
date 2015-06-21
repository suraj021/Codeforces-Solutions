/*
	// Author: Suraj Bora
	// Email: surajbora021@gmail.com

*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <locale>
#include <climits>
#include <string>
#include <vector>
#include <cmath>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

// some typedefs

typedef unsigned long long int ulli;
typedef long long int lli;
typedef long long ll;
typedef pair < int, int > pii;
typedef vector< int > vi;
typedef vector< lli > vlli;
typedef vector< char > vc ;
typedef vector< pii > vpii;
typedef set< int > si;
typedef vector< string > vs;
typedef priority_queue< int > pq;
typedef priority_queue<int, std::vector<int>, std::greater<int> > mpq;

// some macros

#define PINF INT_MAX
#define NINF INT_MIN

#define FOR( i, a, b )    for( int i= a; i<=(b); ++i )
#define rep( i, n ) 	  for( int i= 0; i< (n); ++i )
#define fori( i, x)       for( typeof(x.begin()) i=x.begin(); i!=x.end(); ++i )


#define f 			      first
#define s 	              second
#define pb                push_back
#define mp 		          make_pair
#define sz(x)       	  (int)( x.size() )
#define in 				  insert

//freopen( "inputLA.in", "r", stdin );
//freopen( "outputLA.txt", "w", stdout );

ulli dp[1001][1001];
ulli mat[1001][1001];
string path[1001][1001];

long no_of_zeroes( unsigned long long int N ){

	long count= 0;
	int xx;

	while( N>0 ){

		xx= N%10;

		if( xx!= 0 )
			break;
		else{

			count++;
			N= N/10;
		}
	}

	return count;

}

int main(){

	int N;

	scanf( "%d", &N );

	rep( i, N )
		rep( j, N )
			cin >> mat[i][j];

	memset( dp, 1, sizeof dp );

	dp[0][0]= mat[0][0];

	for( int i=0; i< N; ++i )
		for( int j=0; j< N; ++j )
			path[i][j]= "";

	path[0][0]= "";

	for( int j=1; j< N; ++j ){
		dp[0][j]= dp[0][j-1]*mat[0][j];
		path[0][j]= path[0][j-1] + "R";
	}

	for( int i=1; i< N; ++i ){
		dp[i][0]= dp[i-1][0]*mat[i][0];
		path[i][0]= path[i-1][0] + "D";
	}

	for( int i=1; i<N; ++i )
		for( int j=1; j< N; ++j ){

			ulli x= dp[i][j-1]*mat[i][j];
			ulli y= dp[i-1][j]*mat[i][j];

			ll n1= no_of_zeroes(x);
			ll n2= no_of_zeroes(y);

			if( n1 <= n2 ){

				path[i][j]= path[i][j-1] + "R";
				dp[i][j]= x;
			}else{

				path[i][j]= path[i-1][j] + "D";
				dp[i][j]= y;
			}
		}

	cout << no_of_zeroes( dp[N-1][N-1] ) << endl;;
	cout << path[N-1][N-1]<< endl;;

	/* for( int i=0; i< N; ++i ){
		for( int j=0; j< N; ++j )
			cout << path[i][j] << "     ";

		cout << endl;
	}

	for( int i=0; i< N; ++i ){
		for( int j=0; j< N; ++j )
			cout << dp[i][j] << "      ";

		cout << endl;
	} */

}