#include <bits/stdc++.h>
using namespace std;

vector< int > v;

inline int lowest_bit( int x ){

    return log2(x&-x);
}

long long fast_pow( long long base, long long n ){

	if( n== 0 )
		return 1;
	if( n== 1 )
		return base;
	long long halfn= fast_pow( base, n/2 );

	if( n%2== 0 )
		return ( halfn*halfn );
	else
		return ( ( halfn*halfn )*base );

}

int main(){

    int n, s;

    cin >> s >> n;

    while( s > 0 && n > 0 ){

        int x= fast_pow( 2, lowest_bit( n ) );

        //cout << x << ' ' << n << ' ' << lowest_bit( n ) << endl;

        if( x <= s ){
            s-= x;
            v.push_back( n );
        }

        n--;
    }

    if( s!= 0 ){
        cout << -1 << endl;
        return 0;
    }

    cout << v.size() << endl;;

    for( int i= 0; i< (int)v.size(); ++i )
        cout << v[i] << ' ';

}
