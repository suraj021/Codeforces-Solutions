#include <bits/stdc++.h>

using namespace std;

template<typename T> T gcd(T a, T b) { return (b == 0) ? abs(a) : gcd(b, a % b); }
template<typename T> inline T lcm(T a, T b) { return a / gcd(a, b) * b; }

int main(){

	int x, y;
	long a, b;

	cin >> x >> y >> a >> b;

	long i= x;
	long j= y;

	int k= 2;

	int l= lcm( x, y );

	if( b%l== 0 && a%l== 0 )
		cout << ( b/l - a/l + 1 ) << endl;
	else if( a%l== 0 && b%l!= 0 )
		cout << ( b/l - a/l + 1 ) << endl;
	else if( a%l!= 0 && b%l== 0 )
		cout << ( b/l - a/l ) << endl;
	else
		cout << ( b/l - a/l ) << endl;
}