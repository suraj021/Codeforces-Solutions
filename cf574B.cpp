#include <bits/stdc++.h>

using namespace std;

int edges[4001][4001];
vector< int > graph[4001];
bool flag= false;

bool visited[4001];

int ans= INT_MAX;

void dfs( int u ){

	visited[u]= true;

	if( graph[u].size() >= 2 ){

		for( int i= 0; i< (int)graph[u].size(); ++i ){

			int v= graph[u][i];

			for( int j= 0; j< (int)graph[v].size(); ++j ){
				
				int w= graph[v][j];

				int local_ans= 0;

				if( edges[u][w] ){
						
					flag= true;
					local_ans+= graph[u].size() + graph[v].size() + graph[w].size();

					//cout << u << " " << v << " " << w << endl;

					if( local_ans  < ans )
						ans= local_ans; 
				}

			}

		}

	}

	for( int i= 0; i< (int)graph[u].size(); ++i ){
		int v= graph[u][i];	

		if( !visited[v] )
			dfs( v );
	}

}


int main(){
	
	int N, M;
	int x, y;

	scanf( "%d%d", &N, &M );

	for( int i= 0; i< M; ++i ){
		scanf( "%d%d", &x, &y );

		edges[x][y]= 1;
		edges[y][x]= 1;

		graph[x].push_back( y );
		graph[y].push_back( x );

	}

	for( int i= 1; i<= N; ++i )
		if( !visited[i] )
			dfs(i);

	if( flag )
		printf("%d\n", ans-6 );
	else
		printf("-1\n");
}