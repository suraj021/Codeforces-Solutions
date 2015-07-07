#include <bits/stdc++.h>

using namespace std;

queue< int > qe;

int candy[101];

int main(){

	int N, m;

	scanf( "%d%d", &N, &m );

	for( int i=1; i<= N; ++i ){
		scanf( "%d", &candy[i] );
		qe.push( i );
	}

	while( qe.size()!= 1 ){

		int i= qe.front();

		if( candy[i] > m ){

			candy[i]-= m;

			qe.push( i );

			qe.pop();

		}else{

			qe.pop();
		}



	}

	cout << qe.front() << endl;


}