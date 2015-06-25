#include <bits/stdc++.h>

using namespace std;

int fauj[100];

int main(){

	int n;

	scanf( "%d", &n );

	for( int i=0; i< n; ++i )
		scanf( "%d", &fauj[i] );

	int mini, maxi;
	int minh= 101;
	int maxh= 0;

	for( int i=0; i< n; ++i ){

		if( fauj[i] <= minh ){

			mini= i;
			minh= fauj[i];
		}

		if( fauj[i] > maxh ){

			maxh= fauj[i];
			maxi= i;
		}
	}

	int count;

	if( maxh == minh )
		count= 0;
	else if( maxi < mini )
		count= n - mini + maxi - 1;
	else
		count= n - mini + maxi - 2;

	cout << count << endl;

}