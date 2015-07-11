#include <bits/stdc++.h>

using namespace std;

int path[31000];

int main(){

	int n, t;

	scanf( "%d%d", &n, &t );

	for( int i=1; i<= n-1; ++i )
		scanf( "%d", &path[i] );

	int curr_pos= 1;
	int i= 1;

	bool flag= false;

	while( true ){

		if( i == t ){
			flag= true;
			break;
		}

		if( i > t ){
			flag= false;
			break;
		}

		i= i + path[i];

		//cout << i << endl;
	}

	if( flag )
		printf("YES\n");
	else
		printf("NO\n");

}