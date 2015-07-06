#include <bits/stdc++.h>

using namespace std;

int t[1005];

int main(){

	int n, d;

	scanf( "%d%d", &n, &d );

	for( int i= 0; i< n; ++i )
		scanf( "%d", t + i );

	int count= 0;

	if( d <= 10*(n-1) )
		printf("-1\n");
	else{

		int sum= 0;

		for( int i=0; i< n; ++i )
			sum+= t[i];

		d-= ( (n-1)*10 + sum );

		if( d < 0 )
			printf("-1\n"); 
		else{

			count+= 2*(n-1) + d/5;

			cout << count << endl;

		}

	}


}