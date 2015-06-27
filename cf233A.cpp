#include <bits/stdc++.h>

using namespace std;

int a[101];

int main(){

	int n;

	scanf( "%d", &n );

	for( int i=0; i<= n; ++i )
		a[i]= i;


	if( n%2!= 0 )
		printf("-1\n");
	else{

		for( int i=1; i<= n; ++i )	
			a[i]= i;

		int i;

		for( i= 1; i< n; i+= 2 ){
			swap( a[i], a[i+1] );
			cout << a[i] << " " << a[i+1] << " " ;
		}

		cout << endl;
		
	}

}