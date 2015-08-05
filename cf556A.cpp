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


int main(){

	string s;
	int n;

	cin >> n;
	cin >> s;

	int z= 0, o= 0;

	for( int i= 0; i< n; ++i )
		if( s[i]== '0' )
			z++;
		else
			o++;

	if( z== 0 ){
		cout << o << endl;
		return 0;
	}
	if( o== 0 ){
		cout << z << endl;
		return 0;
	}

	if( n%2== 0 && o== n/2 && z== n/2 ){

		printf("0\n");
		return 0;
	}

	if( z > o ){

		cout << ( n - 2*o ) << endl;
		return 0;
	}

	if( o > z ){
		cout << ( n - 2*z ) << endl;
		return 0;
	}

}
