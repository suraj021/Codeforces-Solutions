#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define all( v ) ( v.begin(), v.end() )

typedef long int li;
typedef long long int lli;
typedef pair< int, int > pii;
typedef pair< long, long > pll;
typedef vector< int > vi;
typedef vector< pii > vpii;
typedef set< int > si;
typedef priority_queue< int, queue< int >, std::greater<int> > mpq;

si num;
si toWrite;
map< int, int > freq;
int arr[100005];

int main(){

	int N, n;
	int count= 0;

	scanf( "%d", &N );

	for( int i= 1; i<= N; ++i )
		toWrite.insert( i );

	for( int i= 1; i<= N; ++i ){
		
		scanf( "%d", &arr[i] );

		if( !freq[arr[i]] )
			toWrite.erase( arr[i] );

		freq[arr[i]]++;
	}

	//for( auto it= toWrite.begin(); it!= toWrite.end(); ++it )
	//	cout << *it << " ";

	//cout << endl;

	for( int i= 1; i<= N; ++i ){

		auto it= num.insert( arr[i] );

		if( !it.ss || arr[i] > N ){
			arr[i]=  *(toWrite.begin());
			toWrite.erase( arr[i] );

		}

	}

	for( int i= 1; i<= N; ++i )
		cout << arr[i] << " ";

	return 0;
}

