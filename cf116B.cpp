#include <bits/stdc++.h>
using namespace std;

char f[12][12];

int dx[]= { 0, 1, 0, -1 };
int dy[]= { -1, 0, 1, 0 };

int main(){

    int n, m;

    cin >> n >> m;

    for( int i= 1; i<= n; ++i )
        for( int j= 1; j<= m; ++j )
            cin >> f[i][j];


    int ans= 0;

    for( int i= 1; i<= n; ++i )
        for( int j= 1; j<= m; ++j ){
            if( f[i][j]== 'W' ){
                for( int k= 0; k< 4; ++k ){
                    if( i+dx[k] >= 1 && i+dx[k] <= n && j+dy[k] >= 1 && j+dy[k]<= m ){
                        if( f[i+dx[k]][j+dy[k]]== 'P' ){
                            ans++;
                            break;
                        }
                    }
                }
            }

        }

    cout << ans;
}
