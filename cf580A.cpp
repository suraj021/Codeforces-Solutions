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

long num[100005];

priority_queue<int > s;

int main(){

	int N;

	int count= 1;

	scanf( "%d", &N );

	for( int i= 0; i< N; ++i ){
		scanf( "%ld", &num[i] );
	}

	s.push( 1 );

	for( int i= 1; i< N; ++i ){
		if( num[i] >= num[i-1] ){
			count++;
			s.push( count );
		}
		else{
			s.push( count );	
			count= 1;
		}
	}

	printf("%d\n", s.top() );

}

