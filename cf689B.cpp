#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< long , long > pii;

int a[200005];
vector< vector< int > > g;
int dist[200005];

void bfs( int s ){

    dist[s]= 0;
    queue< int > q;

    q.push(s );

    while( !q.empty() ){
        int u= q.front();
        q.pop();

        for( int i= 0; i< g[u].size(); ++i ){
            int v= g[u][i];

            if( dist[v]== INT_MAX ){
                q.push( v );
                dist[v]= dist[u]+1;
            }
        }
    }
}


int main(){

    int n;

    cin >> n;

    g.resize( n+2 );

    cin >> a[1];
    g[1].push_back( 2 );
    g[1].push_back( a[1] );

    for( int i= 2; i< n; ++i ){
        cin >> a[i];
        g[i].push_back( i-1 );
        g[i].push_back( i+1 );
        g[i].push_back( a[i] );
        dist[i]= INT_MAX;
    }

    cin >> a[n];
    dist[n]= INT_MAX;
    g[n].push_back( a[n] );
    g[n].push_back( n-1 );

    bfs( 1 );

    for( int i= 1; i<= n; ++i )
        cout << dist[i] << ' ' ;
}
