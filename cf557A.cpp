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
#define exectime() cout<<"execution time "<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;

//freopen( "inputLA.in", "r", stdin );
//freopen( "outputLA.txt", "w", stdout );

template<typename T> T gcd(T a, T b) { return (b == 0) ? abs(a) : gcd(b, a % b); }
template<typename T> inline T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<typename T> inline T mod(T a, T b) { return (a % b + b) % b; }
template<typename T> inline T sqr(T x) { return x * x; }
inline int to_int( string s ){ stringstream ss( s ); int i; ss >> i; return i; }
inline string to_str( int i ){ stringstream ss; ss << i; string s; ss >> s; return s; }

long mini[3000006];
long maxi[3000006];
long ans[3000006];

int main(){

	long n;
	long long mini_sum= 0;
	long long maxi_sum= 0;

	memset( ans, 0, sizeof( ans ) );

	cin >> n;

	for( int i= 1; i<= 3; ++i ){
		cin >> mini[i] >> maxi[i] ;
		mini_sum+= mini[i];
		maxi_sum+= maxi[i];
		ans[i]= mini[i];
	}

	if( mini_sum== n ){

		for( int i= 1; i<= 3; ++i )
			cout << mini[i] << " ";
		cout << endl;

		//cout << "heremin";

		return 0;

	}

	if( maxi_sum== n ){

		for( int i= 1; i<= 3; ++i )
			cout << maxi[i] << " ";
		cout << endl;

		//cout << "heremax";

		return 0;

	}

	for( int i= 1; i<= 3; ++i ){

		//cout << mini_sum << endl;

		if( mini_sum + maxi[i] - mini[i] >= n ){
			mini[i]+= n - mini_sum;
			//cout << i << " " << mini[i] ;

			break;
		}else{
			mini_sum+= maxi[i] - mini[i] ;
			mini[i]= maxi[i];
		}

	}

	for( int i= 1; i<= 3; ++i )
		cout << mini[i] << " ";

	cout << endl;

	return 0;

}
