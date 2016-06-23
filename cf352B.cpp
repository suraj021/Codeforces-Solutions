#include <bits/stdc++.h>
using namespace std;

vector< int > a[100005];
vector< pair< int, int> > sol;

int main(){

    int n, x;
    int maxi= INT_MIN;

    cin >> n;

    for( int i= 1; i<= n; ++i ){
        scanf( "%d", &x );
        a[x].push_back( i );
        if( x > maxi )
            maxi= x;
    }

    for( int i= 1; i<= maxi; ++i ){

        int sz= a[i].size();

        if( !sz )
            continue;

        if( sz== 1 ){
            sol.push_back( { i, 0 } );
        }else if( sz== 2 ){
            sol.push_back( { i, a[i][1]-a[i][0] } );
        }else{

            int diff= a[i][1] - a[i][0];
            bool flag= true;

            for( int j= 2; j< sz; ++j ){
                if( a[i][j] - a[i][j-1] != diff ){
                    flag= false;
                    break;
                }
            }

            if( flag ){
                sol.push_back( { i, diff } );
            }

        }

    }

    cout << (int)sol.size() << endl;

    for( int i= 0; i< (int)sol.size(); ++i ){
        cout << sol[i].first << ' ' << sol[i].second << endl;
    }


}
