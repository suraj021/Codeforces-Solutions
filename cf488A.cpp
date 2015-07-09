#include <bits/stdc++.h>

using namespace std;

bool check( long  n ){

	int r;

	n= abs( n );

	//cout << n ;

	while( n > 0 ){

		r= n%10;

		//cout << "\n\t";

		if( r== 8 )
			return true;
		n= n/10;
	}

	//cout << endl;

	return false;
}

int main(){

	long n;

	cin >> n;

	int count= 0;

	if( n < 0 ){

		for( int i= 1; i<= 20; ++i ){

			count++;

			n+= 1;

			if( check( n ) )
				break;
		}


	}else{

		for( int i= 1; i<= 10; ++i ){

			count++;

			n+= 1;

			if( check( n ) )
				break;
		}
	}

	cout << count << endl;

}