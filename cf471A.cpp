#include <bits/stdc++.h>

using namespace std;

map < int , int > len;

int main(){

	vector< int > vi(6);
	int x;

	for( int i=0; i < 6; ++i ){
		
		scanf( "%d", &vi[i] );
	}

	sort( vi.begin(), vi.end() );

	int ll= vi[2];

	int count= 0;

	for( int i=0; i< 6; ++i )
		if( ll== vi[i] )
			count++;

	//cout << count << endl;

	if( count < 4 )
		printf("Alien\n");
	else{

		vector< int >::iterator itr;

		for( itr= vi.begin(); itr!= vi.end(); ++itr )
			if( *itr== ll )
				break;

		vi.erase( itr, itr + 4 );

		if( vi[0]== vi[1] )
			printf("Elephant\n");
		else
			printf("Bear\n");
	}
	
}