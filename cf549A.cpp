#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

// some typedefs
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

template<typename T> T gcd(T a, T b) { return (b == 0) ? abs(a) : gcd(b, a % b); }
template<typename T> inline T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<typename T> inline T mod(T a, T b) { return (a % b + b) % b; }
template<typename T> inline T sqr(T x) { return x * x; }

inline string to_str( int i ){ stringstream ss; ss << i; string s; ss >> s; return s; }

char face[100][100];
int n, m;

vector< pair< pii, pii > > v;

bool check( int i, int j ){

	for( int k=0; k< v.size(); ++k ){

		if( i== v[k].first.first && j== v[k].second.second && i+1== v[k].second.first && j+1== v[k].second.second )
			return true;
	}

	return false;
}

int main(){

	scanf( "%d%d", &n, &m );

	for( int i=0; i< n; ++i )
		for( int j=0; j< m; ++j )
			cin >> face[i][j] ;
	
	string match= "acef";

	int num= 0;

	for( int i=0; i< n; ++i ){
		for( int j= 0; j< m; ++j ){

			string s= "";

			if( face[i][j]!= 'x' ){

				//cout << i << " " << j << endl;

				if( !check( i, j ) ){

					//cout << "    " <<  i << " " << j << endl;

					s+= face[i][j];
					s+= face[i][j+1];
					s+= face[i+1][j+1];
					s+= face[i+1][j];

					v.pb( mp( mp( i, j ), mp( i+1, j+1 ) ) );

					//cout << s << endl;

				}

			}

			sort( s.begin(), s.end() );

			if( s == match )
				num++;
		}

	}

	cout << num << endl;
}
