#include <bits/stdc++.h>

using namespace std;

int color[100005];
vector< int > g[100005];
vector< int > ccs[100005];

bool isBipartite(int i, int j ){

	queue< int > q; q.push( i );
	color[i]= 0;

	ccs[j].push_back( i );

	while( !q.empty() ){

		int u= q.front(); q.pop();

		for( int k= 0; k< g[u].size(); ++k ){

			int v= g[u][k];

			if( color[v]== -1 ){

				color[v]= 1 - color[u];
				q.push( v );
				ccs[j].push_back( v );
			}else if( color[v]== color[u] )
				return false;

		}


	}

	return true;
}

int main(){

	int n, m;
	int cc= 0;

	memset( color, -1, sizeof( color ) );

	scanf( "%d%d", &n, &m );

	for( int i= 0; i< m; ++i ){

		int x, y;
		scanf( "%d%d", &x, &y );

		g[x].push_back( y );
		g[y].push_back( x );
	}

	// edges 3

	if( m== 0 ){

		cout << "3 " << 1LL*n*(n-1)*(n-2)/6 << endl;
		return 0;
	}


	// edges 0 

	for( int i= 1, j= 0; i<= n; ++i ){
		if( color[i]== -1 ){

			cc++;
			if( !isBipartite( i, j ) ){
				cout << "0 1" << endl;
				return 0;
			}
			j++;

		}

	}

	// edge 1;
	int maxi= -1;

	for( int i= 0; i< cc; ++i ){

		//cout << ccs[i].size() << endl;

		if( (int)ccs[i].size() > maxi )
			maxi= ccs[i].size();
	}

	//cout << maxi << " " << endl;

	if( maxi== 2 ){

		cout << 2 << " " << (1LL*m)*(1LL*( n - 2 )) << endl;
		return 0;

	}

	int r, b;
	r= b= 0;

	long long ans= 0;

	for( int i= 0; i< cc; ++i ){

		int r, c;
		r= c= 0;

		for( int j= 0; j< (int)ccs[i].size(); ++j ){
			if( color[ccs[i][j]] )
				r++;
			else
				c++;

			//cout << ccs[i][j] << " ";
			//cout << endl;
		}

		ans+= (r*1LL)*(1LL*(r-1))/2 + (1LL*c)*(1LL*(c-1))/2*1LL;

	}

	cout << 1 << " " << ans*1LL << endl;
	return 0;

}