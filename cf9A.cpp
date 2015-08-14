#include <bits/stdc++.h>

using namespace std;

int main(){


	int Y, W, D;

	int d[2];

	cin >> Y >> W;

	D= max( Y, W );

	d[0]= 6 - D + 1;
	d[1]= 6;

	int g= __gcd( d[0], d[1] );

	cout << d[0]/g << "/" << d[1]/g << endl;;
} 