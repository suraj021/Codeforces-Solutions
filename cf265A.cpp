#include <bits/stdc++.h>

using namespace std;

int main(){

	string a, b;

	cin >> a ;
	cin >> b ;

	int j= 0;

	for( int i= 0; i< b.length(); ++i ){

		if( a[j]== b[i] )
			j++;
	}

	cout << j+1 << endl;

}