/*
	// Author: Suraj Bora
	// Email: surajbora021@gmail.com

*/

#include <bits/stdc++.h>

using namespace std;

// some typedefs

//typedef unsigned long long int ulli;
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
typedef priority_queue<int, std::vector<int>, std::greater<int> > mpq;	// minimum priority queue

const double PI = 3.1415926535897932384626433832795028841971;

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
#define init( x, v )	  memset( x, v, sizeof x )

//freopen( "inputLA.in", "r", stdin );
//freopen( "outputLA.txt", "w", stdout );
// __gcd( 2, 4 );

string to_str( int i ){

	stringstream ss;

	ss << i;

	string s;

	ss >> s;

	return s;

}

set< string > ss;
map< string, int > freq ;

int main(){

	ios_base::sync_with_stdio(false);

	int T;

	stringstream sss;

	cin >> T;
	string s;

	pair < set<string>::iterator, bool > pib;

	while ( T-- ){

		cin >> s;

		pib= ss.insert( s );

		if( pib.second == true ){

			cout << "OK" << endl;

			continue;
		}else{

			string t;

			int i= freq[s];

			i+= 1;

			t= s + to_str( i );

			ss.insert( t );

			freq[s]++;

			cout << t << endl;

			/*for( int i=1; i<=100000; ++i ){

				temp= s + to_str( i );

				pib= ss.insert( temp );

				if( pib.second== true ){

					cout << temp << endl;
					break;
				}

			} */



		}

	}

}
