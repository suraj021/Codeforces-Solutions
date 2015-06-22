#include <bits/stdc++.h>

using namespace std;

int main(){

	long long k, l;

	cin >> k;
	cin >> l;

	if( l%k!= 0 ){

		printf("NO\n");
	}else{

		int count = 0;

		long long n= k;

		while( n < l ){

			n= 1l*n*k;
			count++;

			//cout << n << " ";
		}

		if( n== l ){
			printf("YES\n");
			cout << count << endl;

		}else
			printf( "NO\n" );
	}

}