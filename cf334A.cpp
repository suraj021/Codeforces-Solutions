#include <bits/stdc++.h>

using namespace std;

int candy[10005];

int main(){

	int N;

	scanf( "%d", &N );

	for( int i=1; i<= N*N; ++i )
		candy[i]= i;

	//for( int i=1; i<= N*N; ++i )
	//	cout << candy[i] << " ";

	//cout << endl;

	for( int bro=0; bro < N; ++bro ){

		int len= N*N;

		int count= 1;

		for( int i=1; count <= N/2; i+= N ){

			printf("%d %d ", candy[i+bro], candy[len-bro] );
			len-= N;
			count++;
		}

		cout << endl;

	}

}