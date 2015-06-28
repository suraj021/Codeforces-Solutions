// check solution no. 3151085

#include <bits/stdc++.h>

using namespace std;

int N= 3;

int main(){

	int press[N][N];
	int state[N][N];

	

	for( int i= 0; i< N; ++i )
		for( int j= 0; j < N; ++j ){
			scanf( "%d", &press[i][j] );

			state[i][j]= 1;
		}
		

	for( int i= 0; i< N; ++i )
		for( int j= 0; j < N; ++j ){


			if( press[i][j]%2!= 0 ){

				//cout << press[i][j] << endl;

				if( state[i][j]== 1 )
					state[i][j]= 0;
				else
					state[i][j]= 1;

				if( i-1 >= 0 && j >= 0 ){

					if( state[i-1][j]== 1 )
						state[i-1][j]= 0;
					else
						state[i-1][j]= 1;
				}

				if( i >= 0 && j-1 >= 0 ){

					if( state[i][j-1]== 1 )
						state[i][j-1]= 0;
					else
						state[i][j-1]= 1;
				}

				if( i >= 0 && j+1 < N ){

					if( state[i][j+1]== 1 )
						state[i][j+1]= 0;
					else
						state[i][j+1]= 1;
				}

				if( i+1 < N ){

					if( state[i+1][j]== 1 )
						state[i+1][j]= 0;
					else
						state[i+1][j]= 1;
				}


			}

		}


	for( int i= 0; i< N; ++i ){
		for( int j= 0; j< N; ++j )
			printf("%d", state[i][j] );

		printf("\n");
	}

}