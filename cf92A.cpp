#include <bits/stdc++.h>

using namespace std;

int chips[51];

int main(){

	int n, m;

	scanf( "%d%d", &n, &m );

	int i= 1;

	while( true ){

		if( i > m )
			break;

		m= m - i;

		i++;

		if( i > n )
			i%= n;

	}

	cout << m << endl;

}