#include <bits/stdc++.h>

using namespace std;

int main(){

	long last, x, count= 0;

	last= -1;

	set< int > si;

	for( int i=0; i< 4; ++i ){

		cin >> x;

		si.insert( x );
	}

	cout << 4-si.size() << endl;
}