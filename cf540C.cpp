#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

typedef pair< int, int > pii;
 
char ice[502][502];
bool used[502][50];
bool fall[502][502];

int n, m;
int r1, c1;
int r2, c2;

bool valid( int i, int j ){

	return ( i>= 1 && i<= n && j>= 1 && j<= m );
}

bool check( int i, int j ){

	return( ( i== r2 ) && ( j== c2 ) );
}

int di[]= { -1, 0, 1, 0 };
int dj[]= { 0, 1, 0, -1 };

void bfs( int i, int j ){

	queue< pii > q;

	q.push( { i, j } );

	used[i][j]= true;

	while( !q.empty() ){

		int u= q.front().ff , v= q.front().ss;

		q.pop();

		for( int k= 0; k< 4; ++k ){

			int x= u + di[k],	y= v + dj[k];

			if( valid( x, y ) && ice[x][y]== 'X' ){
				fall[x][y]= true;
				//cout << x << " " << y << endl;
			}

			if( valid( x, y ) && ice[x][y]== '.' ){
				
				ice[x][y]= 'X';
				used[x][y]= true;
				q.push( { x,y } );
				//cout << x << " " << y << endl;

			}
		}
	}
}




int main(){

	scanf( "%d%d", &n, &m );

	for( int i=1; i<= n; ++i )
		for( int j= 1; j<= m; ++j )
			cin >> ice[i][j] ;

	scanf( "%d%d", &r1, &c1 );
	scanf( "%d%d", &r2, &c2 );

	memset( used, false, sizeof( used ) );
	memset( fall, false, sizeof( fall ) );

	bfs( r1, c1 );

	if( fall[r2][c2] )
		printf("Yes\n");
	else
		printf("No\n");
	
}