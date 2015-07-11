#include <bits/stdc++.h>

using namespace std;

int n, m, k;
int pixel[1001][1001];

vector< pair< int, int > > vpii;

bool check( int i, int j ){

	//cout << i << " " << j << endl;

	// upper left 

	if( i-1 >=1 && j-1 >= 1 ){

		//cout << "\t"<< i-1<< ' ' << j-1 << "     " << i-1 << ' ' << j << "     " << i << ' ' << j-1 << endl;

		if( pixel[i-1][j-1]== 0 && pixel[i-1][j]== 0 && pixel[i][j-1]== 0 )
			return true;
	}
	
	// upper right corner

	if( i-1 >= 1 && j+1 <= m ){

		//cout << "\t" << i-1 << ' ' << j+1 << "     " << i-1 << ' ' << j << "    " << i << ' ' << j+1 << endl;

		if( pixel[i-1][j+1]== 0 && pixel[i-1][j]== 0 && pixel[i][j+1]== 0 )
			return true;
	}

	// bottom left

	if( i+1<= n && j-1 >= 1){

		//cout << "\t" << i << ' ' << j-1 << "     " << i+1 << ' ' << j-1 << "    " << i+1 << ' ' << j << endl;

		if( pixel[i][j-1]== 0 && pixel[i+1][j-1]== 0 && pixel[i+1][j]== 0 )
			return true;
	}

	// bottom right 

	if( i+1 <= n && j+1 <= m ){

		//cout << "\t" << i+1 << ' ' << j << "    " << i+1 << ' ' << j+1 << "     " << i << ' ' <<  j+1 << endl;

		if( pixel[i+1][j]== 0 && pixel[i+1][j+1]== 0 && pixel[i][j+1]== 0 )
			return true;
	}

	return false;

}

int main(){

	scanf( "%d%d%d", &n, &m, &k );

	memset( pixel, 1, sizeof( pixel ) );

	int x, y;

	for( int i= 0; i< k; ++i ){

		scanf( "%d%d", &x, &y );

		vpii.push_back( { x, y } );

	}

	int i;
	bool flag= false;

	for( i= 0; i< vpii.size(); ++i ){

		pixel[vpii[i].first][vpii[i].second]= 0;

		if( i > 2 )
			if( check( vpii[i].first, vpii[i].second ) ){
				
				cout << i + 1 << endl;
				return 0;
			}
	}

	
	cout << "0" << endl;

}