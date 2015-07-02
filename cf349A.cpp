#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, x;

	int rupay25, rupay50;

	rupay50= rupay25= 0;

	scanf( "%d", &n );

	bool flag= true;

	while( n-- ){

		scanf( "%d", &x );

		if( x== 25 ){

			rupay25++;
		}else if ( x== 50 ){

			rupay50++;
			rupay25--;

			//cout << rupay25 << " " << rupay50 << endl;;
		}else{

			if( rupay50 > 0 ){

				rupay25--;
				rupay50--;
			}else
			rupay25-= 3;
		}

		if( rupay25 < 0 || rupay50 < 0 ){
			printf("NO\n");
			flag= false;
			break;
		}

	}

	if( flag )
		printf("YES\n");

}