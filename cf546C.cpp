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

#define _ ios_base::sync_with_stdio(0); cin.tie(0);

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

queue < int > A;
queue < int > B;

bool equals( queue < int > X, queue< int > Y ){

	int flag= false;

	if( X.size() != Y.size() ){
		//cout << "false" << endl;
		return false;
	}

	while( !X.empty() || !Y.empty() ){

		if( X.front() != Y.front() ){

			flag= true;
			break;
		}

		X.pop();
		Y.pop();

	}

	if( flag ){
		//cout << "false" << endl;
		return false;
	}

	//cout << "true" << endl;
	return true;

}

int main(){

	int n ;
	int k1, k2;

	int x;

	queue < int > dupA, dupB;

	cin >> n;

	cin >> k1;

	for( int i=0; i< k1; ++i ){

		cin >> x;
		A.push( x );
		dupA.push( x );
	}
	
	cin >> k2;

	for( int i=0; i< k2; ++i ){

		cin >> x;
		B.push( x );
		dupB.push(x);
	}

	int fight= 0;

	bool flag= false;

	int round= 0;

	while( true ){

		int a= A.front();
		int b= B.front();

		//cout << a << " " << b << endl;

		if( a > b ){		// 'A' won the fight

			A.push( b );
			A.push( a );
		}else{

			B.push( a );
			B.push( b );
		}

		fight++;

		A.pop();
		B.pop();



		if( A.empty() || B.empty() )
			break;

		//if( equals( A, dupA ) && equals( B, dupB ) ){
		//	flag= true;
		//	break;
		//}

		round++;

		if( round > 20000000 )
			break;
	}

	if( round> 20000000 )
		cout << "-1" << endl;
	else{

		int winner= A.empty() ? 2 : 1 ;

		cout << fight << " " << winner << endl;
	}
	
}
