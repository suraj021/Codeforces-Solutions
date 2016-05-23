#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define ff first
#define ss second

char board[9][9];
vector< pii > A, B;

int main(){

	for( int i= 1; i<= 8; ++i )
		for( int j= 1; j<= 8; ++j ){
			cin >> board[i][j];
			if( board[i][j]== 'B' ){
				B.push_back( { i, j } );
			}else if( board[i][j]== 'W' ){
				A.push_back( { i, j } );
			}
		}

	int ans1= INT_MAX;
	int ans2= INT_MAX;

	for( int i= 0; i< A.size(); ++i ){
		int x= A[i].ff;
		int y= A[i].ss;

		int count= 0;

		while( x > 0 ){
			if( board[x][y]== 'B' ){
				count= INT_MAX;
				break;
			}
			count++;
			x--;
		}

		ans1= min( count, ans1 );
	}

	// for B

	for( int i= 0; i< B.size(); ++i ){
		int x= B[i].ff;
		int y= B[i].ss;

		int count= 0;

		while( x <= 8 ){
			if( board[x][y]== 'W' ){
				count= INT_MAX;
				break;
			}
			count++;
			x++;
		}

		ans2= min( count, ans2 );
	}

	//cout << ans1 << " " << ans2 << endl;

	if( ans1 > ans2 )
		cout << 'B' << endl;
	else 
		cout << 'A' << endl;

}