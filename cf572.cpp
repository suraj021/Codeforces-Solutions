#include <bits/stdc++.h>

using namespace std;

long A[100005];
long B[100005];

int main(){

	int N, M;
	int k, m;

	scanf( "%d%d", &N, &M );
	scanf( "%d%d", &k, &m );

	for( int i= 0; i< N;  ++i )
		scanf( "%ld", &A[i] );

	for( int i= 0; i< M; ++i )
		scanf( "%ld", &B[i] );

	if( k > N || m > M){
		printf("NO\n");
		return 0;
	}

	long num= A[k-1];

	int idx= lower_bound( B, B+M, num ) - B;

	

	if( B[idx]== num ){

		idx++;

		while( true ){
			if( B[idx]!= num )
				break;
			++idx;
		}

		//cout << B[idx] << endl;

		int left= M - idx ;

		if( left >= m  ){
			printf("YES\n");
		}else
			printf("NO\n");

	}else{

		while( true ){
			if( B[idx]!= num )
				break;
			++idx;
		}

		//cout << B[idx] << endl;

		int left= M - idx;

		if( left >= m  ){
			printf("YES\n");
		}else
			printf("NO\n");

	}

}
