#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

int c[105];

int main(){

	int t, n;
	int m;

	cin >> n >> t;

	m= n;

	if( n==1 && t== 10 ){
		cout << -1 << endl;
		return 0;
	}

	if( t!= 10 )
		c[0]= t;
	else
		c[0]= 1;

	for( int i= 1; i< n; ++i )
		c[i]= 0;

	for( int i= 0; i< n; ++i )
		cout << c[i] ;

	cout << endl;

}