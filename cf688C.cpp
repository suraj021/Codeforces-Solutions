#include <bits/stdc++.h>
using namespace std;

vector< int > g[100005];
vector< int > A, B;
bool visited[100005]= {false};
int n, m;
int cover[100005]= {-1};

bool bfs( int s ){

    queue< int > q;

    visited[s]= true;
    q.push( s );
    cover[s]= 0;

    while( !q.empty() ){

        int u= q.front();
        q.pop();
        //cout << endl;
        //cout << u << "    bete:   "<< ' '  ;

        for( int i= 0; i< g[u].size(); ++i ){
            int v= g[u][i];

            if( !visited[v] ){
                visited[v]= true;
                q.push( v );
                //cout << v << ' ' ;
                cover[v]= 1 - cover[u];
            }else if( cover[v]== cover[u] )
                return false;
        }
    }

    return true;
}


int main(){

    scanf( "%d%d", &n, &m );

    for( int i= 0; i< m; ++i ){
        int u, v;
        scanf( "%d%d", &u, &v );
        g[u].push_back( v );
        g[v].push_back( u );
    }

        bool flag= true;

        memset( visited, false, sizeof visited );

        for( int i= 1; i<= n; ++i ){
            if( !visited[i]  ){
                if( g[i].size() ){
                    flag= bfs( i );
                }
                else
                    cover[i]= 100;
            }
            if( !flag )
                break;
        }

        if( !flag ){
            cout << -1;
            return 0;
        }

        for( int i= 1; i<= n; ++i ){
            if( cover[i]== 0 )
                A.push_back( i );
            else if( cover[i]== 1 )
                B.push_back( i );
        }

        //cout << endl;
        printf( "%d\n", A.size() );

        for( int i= 0; i< (int)A.size(); ++i )
            printf( "%d ", A[i] );

        printf("\n");

        printf( "%d\n", B.size() );
        for( int i= 0; i< (int)B.size(); ++i )
            printf( "%d ", B[i] );
        printf( "\n" );

    return 0;
}
