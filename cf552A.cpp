#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int a[101][101] ;

int main(){

	int n;

	int x1, y1, x2, y2;

	int sum= 0;

	memset( a, 0, sizeof(a) );

	cin >> n;

	while( n-- ){

		scanf( "%d%d%d%d", &x1, &y1, &x2, &y2 );

		for( int i= x1; i<= x2; ++i )
			for( int j= y1; j<= y2; ++j ){
				a[i][j]++;
			}

	}

	for( int i=0; i<= 100; ++i )
		for( int j=0; j<= 100; ++j )
			sum+= a[i][j];
		
	cout << sum << endl;

}
