#include <bits/stdc++.h>

using namespace std;

int main(){

	long n;

	cin >> n;

	if( n%2!= 0 )
		cout << ( n/2 + n + 1) << endl;
	else 
		cout << ( n/2 + n ) << endl;
}