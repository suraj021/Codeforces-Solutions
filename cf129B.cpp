#include <bits/stdc++.h>
using namespace std;

int a[1005][1005]= { 0 };
int b[1005]= { 0 };

int main(){

    int n, m;
    int x, y;

    cin >> n >> m;

    for( int i= 0; i< m; ++i ){
        cin >> x >> y;
        a[x][y]= 1;
        a[y][x]= 1;
        b[x]++;
        b[y]++;
    }

    int ans= 0;

    while( true ){
        vector< int > v;
        for( int i= 1; i<= n; ++i ){
            if( b[i]== 1 ){
                v.push_back( i );
                for( int j= 1; j<= n; ++j ){
                    if( a[i][j]== 1 ){
                        a[i][j]= 0;
                        a[j][i]= 0;
                        v.push_back( j );
                    }
                }
            }
        }

        if( v.size()== 0 )
            break;

        for( int i= 0; i< v.size(); ++i )
            b[v[i]]--;

        ans++;

    }

    cout << ans << endl;

    return 0;
}
