#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

map< long int, long int > freq;
long int lower[1000006];
long int upper[1000006];

int main(){

	int N;
	long int n;

	scanf( "%d", &N );

	memset( lower, -1, sizeof(lower) );
	memset( upper, -1, sizeof(upper) );

	for( int i= 0; i< N; ++i ){

		scanf( "%ld", &n );

		freq[n]++;

		if( lower[n]== -1 ){
			lower[n]= i;
		}

		if( i > upper[n] )
			upper[n]= i;

	}	

	int maxi= INT_MIN;
	int num;

	for( auto it= freq.begin(); it!= freq.end(); ++it ){

		if( maxi < it->ss ){
			num= it->ff;
			maxi= it->ss;
		}

	}

	//cout << num << " " << maxi <<  endl;

	int i, j;
	i= 0;
	j= N-1;

	for( auto it= freq.begin(); it!= freq.end(); ++it ){

		if( it->ss == maxi ){

			int diff= upper[it->ff] - lower[it->ff];

			//cout << it->ff << " " << upper[it->ff] << " " << lower[it->ff] << " " << (j-i) << endl;


			if( diff < (j-i) ){
				i= lower[it->ff];
				j= upper[it->ff];
			}

		}

	}

	printf("%d %d\n", i+1, j+1 );

}