#include <bits/stdc++.h>

using namespace std;

int main(){

	int a, b;

	scanf( "%d%d", &a, &b );

	int count= a;

	int no_of_candles= a;

	if( a >= b ){

		while( true ){

			count+= no_of_candles/b;

			no_of_candles= no_of_candles/b + no_of_candles%b;

			//cout << no_of_candles << endl;

			if( no_of_candles < b )
				break;

		}

	}

	cout << count << endl;

}