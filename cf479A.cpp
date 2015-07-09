#include <bits/stdc++.h>

using namespace std;

int main(){

	int a, b, c;

	scanf( "%d%d%d", &a, &b, &c );

	int u= a*b + c;
	int v= a + b + c;
	int w= a + b*c;
	int x= a*( b + c );
	int y= ( a + b )*c;
	int z= a*b*c;


	cout << max( u, max( v, max( w, max( x, max( y, z ) ) ) ) ) << endl;

}