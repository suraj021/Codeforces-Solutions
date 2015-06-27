#include <bits/stdc++.h>

using namespace std;

long x[51];

int main(){

	int n, k;
	
	cin >> n >> k;

	for( int i= 0; i< n; ++i )
		cin >> x[i];

	if( k > n ){
		printf("-1\n");
		return 0;
	}

	sort( x, x+n );

	cout << x[n-k] << " 0" << endl;

}