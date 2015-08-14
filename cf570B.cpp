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


int main(){

	li n, m;

	scanf( "%ld%ld", &n, &m );

	if( n== 1 ){
		printf("%d\n", n );
		return 0;
	}

	if( n- m > m - 1 ){

		printf("%ld\n", m+1 );	

	}else{

		printf("%ld\n", m-1 );
	}

}

