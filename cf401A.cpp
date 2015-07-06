#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, x;

	int a;

	scanf( "%d%d", &n, &x );

	int sum= 0;

	while( n-- ){

		scanf( "%d", &a );

		sum+= a;
	}

	//cout << sum << endl;

	int count= 0;

	if( sum== 0 ){

	}else{

		if( abs(sum)<= x ){

		count= 1;
		
		}else{

			count= abs( sum )/abs( x );

			if( abs(sum)%abs(x)!= 0 )
				count++;

		}



	}

	cout << count << endl;

}