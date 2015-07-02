#include <bits/stdc++.h>

using namespace std;

int main(){

	int a, b;

	int x, y, z;

	scanf( "%d%d", &a, &b );

	if( (b-a)%2== 0 ){

		if( a!= b ){
			y= 1;

			if( a < b ){

				x= ( b+a )/2;
				z= 6 - x;
				x--;

			}else{

				z= ( b + a )/2;
				x= 6 - z; 
				z--;
			}

		}else{

			y= 6;
			x= z= 0;
		}
	}
	else{

		y= 0;

		if( a < b ){

			x= ( b+a )/2;
			z= 6 - x;
		}else{

			z= ( b + a )/2;
			x= 6 - z; 
		}
	}

	

	cout << x << " " << y << " " << z << endl;

}