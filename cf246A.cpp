#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;

	scanf( "%d", &n );

	if( n== 1 || n== 2 ){
		printf("-1\n");
		return 0;
	}

	for( int i= n; i>= 1; --i )
		cout << i << " ";

	cout << endl;
}