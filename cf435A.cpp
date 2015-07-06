#include <bits/stdc++.h>

using namespace std;

int line[101];

int main(){

	int n, m;

	int x;

	scanf( "%d%d", &n, &m );

	for( int i=0; i< n; ++i )
		scanf( "%d", &line[i] );

	int count= 1;
	int people= 0;

	for( int i=0; i< n; ){

		if( people + line[i] <= m ){

			people+= line[i] ;
		}else{

			count++;
			people= line[i];
		}

		i++;
	}

	cout << count << endl;


}