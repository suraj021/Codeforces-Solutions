#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< long, int > pli;

#define ff first
#define ss second
#define mod 1000000007
#define pb push_back

vector< pli > g[5001];
vector< int > order;
long dp[5001][5001];
int parent[5001][5001];
bool visited[5001];
vector<int> av;

void dfs( int u ){

    visited[u]= true;

    for( int i= 0; i< g[u].size(); ++i ){
        int v= g[u][i].ff;

        if( !visited[v] )
            dfs( v );
    }

    order.pb( u );
}

int main(){

    int n, m;
    long T;

    cin >> n >> m >> T;

    for( int i= 0; i< m; ++i ){
        int u, v;
        long t;

        cin >> u >> v >> t;
        g[u].pb( { v, t } );
    }

    for( int i= 0; i<= n; ++i ){
        for( int j= 0; j<= n; ++j )
            dp[i][j]= 1e9 + 1e6;
    }

    dp[1][1]= 0;

    memset( visited, 0, sizeof visited );

    dfs( 1 );

    reverse( order.begin(), order.end() );

    for( int i= 0; i< order.size(); ++i ){
        int u= order[i];

        for( int l= 0; l<= n; ++l ){

            if( dp[u][l] > T )
                continue;
            for( int j= 0; j< g[u].size(); ++j ){
                int v= g[u][j].ff;
                long w= g[u][j].ss;
                long cost= dp[u][l] + w;

                if( cost < dp[v][l+1] ){
                    dp[v][l+1]= cost;
                    parent[v][l+1]= u;
                }
            }

        }
    }

    int ans;

    for( int l= 1; l<= n; ++l ){
        if( dp[n][l] <= T ){
            ans= l;
        }
    }

    cout << ans << endl;

    for (; ans; --ans){
		av.push_back(n);
		n = parent[n][ans];
	}
	reverse(av.begin(), av.end());

	for (int i = 0; i < av.size(); i++){
		if (i)
			cout << " ";
		cout << av[i];
	}
	cout << endl;

}
