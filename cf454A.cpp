#include <bits/stdc++.h>

using namespace std;

char diamond[102][102];

int main(){

	int d;

	scanf( "%d", &d );

	int mid= d/2 + 1;

	int x= 1;

	for( int i=1; i<= mid; ++i ){

		//cout << mid + x << "   " << abs(mid - x) << endl;

		for( int j= 1; j<= d; ++j ){

			//cout << j << "  " << mid+x << "    " << mid-x << endl;

			if( j > abs(mid - x ) && j < mid + x  )
				printf("D");
			else
				printf("*");
		}	

		printf("\n");

		x+= 1;
	}

	x-= 2;

	for( int i=mid+1; i <=d ; ++i ){

		//cout << mid + x << "   " << abs(mid - x) << endl;

		for( int j= 1; j<= d; ++j ){

			//cout << j << "  " << mid+x << "    " << mid-x << endl;

			if( j > abs(mid - x ) && j < mid + x  )
				printf("D");
			else
				printf("*");
		}	

		printf("\n");

		x-= 1;
	}

}