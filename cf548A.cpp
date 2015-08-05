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

string s;
int k;

bool is_palindrome( string str ){

	int n= str.length();

	for( int i=0; i<= str.length()/2; ++i ){

		if( str[i]!= str[n-1] )
			return false;

		n--;
	}

	return true;
}

int main(){

	cin >> s;
	scanf( "%d", &k );

	if( s.length()%k != 0 )
		printf("NO\n");
	else{

		string help;
		bool flag= false;

		k= s.length()/k;

		for( int i=0; i<s.length(); i= i+k ){

			help= s.substr( i, k );

			if( is_palindrome( help )== false ){

				flag= true;
				break;
			}

		}

		if( flag )
			printf("NO\n");
		else
			printf("YES\n");
	}
}