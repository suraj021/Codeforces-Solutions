#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

long long abcdef= 10000000009;

vector< pair< string, long long > > sol;
priority_queue< long long, vector<long long>, std::greater<long long> > pq;

int main(){

    int n;
    long x;
    string q;

    scanf( "%d", &n );

    for( int i= 0; i< n; ++i ){

        cin >> q;

        if( q== "insert" ){
            scanf( "%ld", &x );
            pq.push( x );
            sol.push_back( { q, x } );

        }else if( q== "getMin" ){
            scanf( "%ld", &x );

            if( pq.empty() ){
                pq.push(x);
                sol.push_back( { "insert", x } );
                sol.push_back( { "getMin", x } );
                //pq.pop();

            }else{

                while( !pq.empty() && pq.top()< x ){
                    pq.pop();
                    sol.push_back( { "removeMin", abcdef  } );
                }

                if( pq.empty() ){
                    pq.push( x );
                    //cout << "here" << ' ' ;
                    sol.push_back( { "insert", x } );
                }else if( pq.top() > x ){
                    pq.push( x );
                    //cout << "here" << ' ' ;
                    sol.push_back( { "insert", x } );
                }

                sol.push_back( { "getMin", x } );
            }

        }else{

            if( pq.empty() ){
                sol.push_back( { "insert", -1000000000 } );
                sol.push_back( { "removeMin", abcdef  } );
            }else{
                pq.pop();
                sol.push_back( { "removeMin", abcdef  } );
            }

        }

    }

    cout << sol.size() << endl;
    for( int i= 0; i<sol.size(); ++i ){
        cout << sol[i].first ;
        if( sol[i].second!= abcdef )
            printf( " %lld", sol[i].second );
        printf( "\n" );
    }

}
