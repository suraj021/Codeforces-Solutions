#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, m;
	int a, b;

	scanf( "%d%d", &n, &m );

	int count= 0;

	for( a= 0; a<= 31; ++a ){
		for( b= 0; b<= 31; ++b ){

			//cout << a << " " << b << endl;
			
			if( ( a*a + b == n ) && ( a + b*b )== m )
				count++;
		}
	}

	cout << count << endl;

}