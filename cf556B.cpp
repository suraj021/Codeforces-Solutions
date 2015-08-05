#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

// some typedefs
typedef long long ll;
typedef pair < int, int > pii;
typedef set< int > si;
typedef vector< int > vi;
typedef vector< char > vc ;
typedef vector< pii > vpii;
typedef priority_queue< int > pq;
typedef priority_queue<int, std::vector<int>, std::greater<int> > mpq;

const double PI = 3.1415926535897932384626433832795028841971;

// some macros
#define ff 			      first
#define ss 	              second
#define pb                push_back
#define all( v ) 		  begin( v ), end( v )

//freopen( "inputLA.in", "r", stdin );
//freopen( "outputLA.txt", "w", stdout );

template<typename T> T gcd(T a, T b) { return (b == 0) ? abs(a) : gcd(b, a % b); }
template<typename T> inline T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<typename T> inline T mod(T a, T b) { return (a % b + b) % b; }
template<typename T> inline T sqr(T x) { return x * x; }
inline int to_int( string s ){ stringstream ss( s ); int i; ss >> i; return i; }
inline string to_str( int i ){ stringstream ss; ss << i; string s; ss >> s; return s; }

int a[1001];
vi v;
int n;

bool sorted(){

	for( int i= 0; i< n; ++i )
		if( a[i]!= i )
			return false;

	return true;
}

bool equal(){

	for( int i= 0; i< v.size(); ++i )
		if( v[i]!= a[i] )
			return false;

	return true;
}

int main(){

	//freopen( "input.in", "r", stdin );
	//freopen( "output.txt", "w", stdout );

	scanf ( "%d", &n );

	for( int i= 0; i< n; ++i ){
		scanf( "%d", &a[i] );
		v.pb( a[i] );
	}

	bool gear= false;

	while( true ){

		for( int i= 0; i < n ; ++i ){

			if( i%2== 0 ){

				a[i]= a[i] + 1 ;

				if( a[i] >= n )
					a[i]= 0;
			}
			else{
				a[i]--;

				if( a[i] < 0 )
					a[i]= n-1;
			}

		}

		if( sorted() ){

			gear= true;
			break;
		}
		
		if( equal() )
			break;

	}

	if( gear )
		printf("Yes\n");
	else
		printf("No\n");
}
