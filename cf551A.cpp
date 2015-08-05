#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

// some typedefs
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
#define f 			      first
#define s 	              second
#define pb                push_back
#define mp 		          make_pair			// instead use { };
#define init( x, v )	  memset( x, v, sizeof x )

//freopen( "inputLA.in", "r", stdin );
//freopen( "outputLA.txt", "w", stdout );
// __gcd( 2, 4 );

template<typename T> T gcd(T a, T b) { return (b == 0) ? abs(a) : gcd(b, a % b); }
template<typename T> inline T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<typename T> inline T mod(T a, T b) { return (a % b + b) % b; }
template<typename T> inline T sqr(T x) { return x * x; }
inline string to_str( int i ){ stringstream ss; ss << i; string s; ss >> s; return s; }
void binary(int number){int remainder; if(number <= 1){ cout << number; return; } remainder = number%2; binary(number >> 1);cout << remainder; }

int a[2001];
int ans[2001];

int main(){

	int n;

	scanf( "%d", &n );

	for( int i=1; i<= n; ++i ){
		scanf( "%d", &a[i] );

		ans[i]= a[i];

	}

	sort( a+1 , a + n + 1 );

	for( int i=1; i<= n; ++i ){

		int x= n- ( upper_bound( a+1, a+n+1 , ans[i] ) - a )+ 1 ;

		cout << 1 + x << " ";
	}

	cout << endl;

}
