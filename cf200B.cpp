#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;

	double x;

	double sum= 0.0000000000;

	scanf( "%d", &n );

	for( int i=0; i< n; ++i){

		cin >> x;

		sum+= x;
	}

	cout << std::setprecision( 10 ) << sum/n;
}