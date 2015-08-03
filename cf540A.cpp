#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	string init, final;

	scanf( "%d", &n );
	cin >> init;
	cin >> final;

	int count= 0;

	int x, y;

	for( int i= 0; i < n; ++i ){

			x= abs( final[i] - init[i] ) ;
			y= 10 - x;

		count+= min( x, y );

		//cout << x << " " << y << " " << count << " " << endl;
	}

	cout << count << endl;

}