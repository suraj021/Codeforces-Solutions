#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define all( v ) ( v.begin(), v.end() )

typedef long int li;
typedef long long int lli;
typedef pair< int, int > pii;
typedef pair< long, long > pll;
typedef vector< int > vi;
typedef vector< pii > vpii;
typedef set< int > si;
typedef priority_queue< int, queue< int >, std::greater<int> > mpq;

int process( const string &s ){

	int count= 0;

	for( int i= 0; i< s.length()-1; ++i ){

		if( s[i]== '.' && s[i+1]== '.' ){
			count++;
		}

	}

	return count;
}

int main(){

	int n, m;

	string s;

	scanf( "%d%d", &n, &m );

	cin >> s;

	int count= process( s );

	while( m-- ){

		int i;
		char c;

		cin >> i >> c;

		--i;

		if( s[i]== '.' ){

			if( i > 0 && s[i-1]== '.' )
				count--;

			if( i < s.length()-1 && s[i+1]== '.' )
				count--;

		}

		s[i]= c;

		if( s[i]== '.' ){

			if( i > 0 && s[i-1]== '.' )
				count++;

			if( i < s.length()-1 && s[i+1]== '.' )
				count++;

		}

		printf("%d\n", count );
	}

}

