#include <bits/stdc++.h>

using namespace std;

long t[100005];

int main(){

	int n;

	scanf( "%d", &n );

	for( int i= 0; i< n; ++i )
		cin >> t[i];

	long sum= 0;	
	int count= 0;

	sort( t, t+n );

	for( int i=0; i< n; ++i ){

		if( sum <= t[i] ){
			count++;
			sum+= t[i];
		}

	}

	cout << count << endl;

}