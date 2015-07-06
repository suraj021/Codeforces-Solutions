#include <bits/stdc++.h>

using namespace std;

long long s[100005];

int main(){

	int n, x;
	long long ans= 0;

	scanf( "%d%d", &n, &x );

	for( int i=0; i< n; ++i )
		cin >> s[i];

	sort( s, s+n );

	for( int i=0; i< n; ++i ){

		ans+= s[i]*max( x-i, 1 );

	}

	cout << ans << endl;
}