#include <bits/stdc++.h>

using namespace std;

int points[1005];

int main(){

	int n;

	scanf( "%d", &n );

	for( int i=0; i< n; ++i )
		scanf( "%d", &points[i] );

	int worst= points[0];
	int best= points[0];

	int count = 0;

	for( int i=1; i< n; ++i ){

		if( points[i] < worst ){
			worst= points[i];
			count++;
		}
		if( points[i] > best ){
			best= points[i] ;
			count++;
		}

	}

	cout << count << endl;

}