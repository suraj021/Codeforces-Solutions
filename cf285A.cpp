#include <bits/stdc++.h>

using namespace std;

int a[100005];

int main(){

	int n, k;

	cin >> n >> k;

	for( int i=1; i<= n; ++i )
		a[i]= i;

	int i= 1;

	if( n-1== k )
		reverse( a+1, a+n+1 );
	else{

		reverse( a+n-k, a+n+1 );
	}

	for( int i=1; i<= n; ++i )
		cout << a[i] << " ";

	cout << endl;
}