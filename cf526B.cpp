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

int main(){

	int n;

	scanf( "%d", &n );

	int k= 1 << ( n+1 );

	int light[k];

	for( int i= 2; i< k ; ++i )
		scanf( "%d", &light[i] );

	int ans= 0;

	for( int i= (k-1)/2; i>=1; --i ){

		int l= 2*i;
		int r= 2*i + 1;

		ans+= max( light[l], light[r] ) - min( light[r], light[l] );

		light[i]+= max( light[l], light[r] );

	}

	cout << ans << endl;

	return 0;

}