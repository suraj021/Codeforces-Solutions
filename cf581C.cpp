#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

pair< int,int > a[100005];

int main(){

	int N;
	long k;

	scanf( "%d%ld", &N, &k );

	for( int i= 0; i< N; ++i ){
		scanf( "%d", &a[i].ss );

		for( int j= 10; j<= 100; j+= 10 ){
			if( j-a[i].ss >= 0 ){
				a[i].ff= j-a[i].ss;
				break;
			}
		}

	}

	sort( a, a+N );

	//for( int i= 0; i< N; ++i )
	//	cout << a[i].ff << " " << a[i].ss << endl;

	long ans= 0;

	for( int i= 0; i< N; ++i ){

		//cout << k << " ";

		if( k >= a[i].ff ){
			a[i].ss+= a[i].ff ;
			k-= a[i].ff;
		}else
			break;

		//cout << k << endl;

	}

	int i= 0;

	while( k >= 10 && i< N ){

		a[i].ss+= k;

		if( a[i].ss > 100 ){
			k= a[i].ss - 100;
			a[i].ss= 100;
		}else{
			k= 0;
		}
		++i;
	}


	for( int i= 0; i< N; ++i )
		ans+= a[i].ss/10;

	printf( "%ld\n", ans );

}