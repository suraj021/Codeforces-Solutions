/*
	// Author: Suraj Bora
	// Email: surajbora021@gmail.com

*/

#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <vector>
#include <set>
#include <string>
#include <queue>

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
typedef priority_queue<int, std::vector<int>, std::greater<int> > mpq;

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

int myComp ( const void * x, const void * y ){

	int a= ((pair< pii, int >*)x)->first.first;
	int b= ((pair< pii, int >*)y)->first.first;

  if ( a < b ) return -1;
  if ( a == b ) return 0;
  if ( a > b ) return 1;

}

pair < pii, int > size[5001];

int main(){

	ios_base::sync_with_stdio(false);

	int N;
	int b, h;

	cin >> N >> b >> h;

	for( int i=0; i< N; ++i ){
		cin >> size[i].first.first >> size[i].first.second ;
		size[i].second= i+1;
	}

	//qsort( size, N, sizeof( pair< pii, int > ), myComp );

	sort( size, size + N );;

	int max= NINF;

	vi v;
	vi ans;

	//cout << endl;

	//for( int i=0; i< N; ++i )
	//	cout << size[i].f.f << " " << size[i].f.s << endl;

	for( int i=0; i< N-1; ++i ){

		int count = 0;

		v.clear();

		if( size[i].first.first < b || size[i].first.second < h )
			continue;

		count++;

		v.pb( size[i].second );

		int a= size[i].f.f;
		int b= size[i].f.s;

		for( int j= i+1; j< N; ++j ){

			if( size[j].f.f > a && size[j].f.s > b ){
				
				count++;
				v.pb( size[j].second );

				a= size[j].f.f;
				b= size[j].f.s;

			}

		}

		//for( vi::iterator it= v.begin(); it!= v.end(); ++it )
		//cout << *it << " ";

		//cout << endl;

		if( count > max ){
			max= count;
			ans= v;
		}
	}

	if( max > NINF )
		cout << max << endl;
	else
		cout << 0 ;

	for( vi::iterator it= ans.begin(); it!= ans.end(); ++it )
		cout << *it << " ";

	cout << endl;

}
