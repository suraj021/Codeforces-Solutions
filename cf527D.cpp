#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

#define mp make_pair
#define f first
#define s second
#define pb push_back
#define ll long long int
#define pii pair< ll, ll >

vector< pii > v;

int main(){

	int N;
	ll X, V;

	scanf( "%d", &N );

	for( int i=0; i<N; i++ ){

		scanf( "%lld%lld", &X, &V );
		v.pb( mp( X+V, X-V ) );
	}

	sort( v.begin(), v.end() );

	for( int i=k; i<N; k++ ){

		 


	}	

	for( int i=0; i<N; i++ )
		cout << v[i].first << " " << v[i].second << endl;


}