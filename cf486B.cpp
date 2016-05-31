#include <bits/stdc++.h>
using namespace std;

int a[101][101];
int ans[101][101];

int main(){

    int m, n;

    cin >> m >> n;

    for( int i= 0; i< m; ++i )
        for( int j= 0; j< n; ++j ){
            cin >> a[i][j];
            ans[i][j]= 1;
        }

    for( int i= 0; i< m; ++i ){
        for( int j= 0; j< n; ++j ){

            if( a[i][j]== 0 ){

                for( int k= 0; k< m; ++k ){
                    ans[k][j]= 0;
                }

                for( int l= 0; l< n; ++l ){
                    ans[i][l]= 0;
                }

            }
        }
    }

    bool is= true;

    for( int i= 0; i< m; ++i ){
        for( int j= 0; j< n; ++j ){

            int x= ans[0][j];

            for( int k= 1; k< m; ++k )
                x|= ans[k][j];
            for( int l= 0; l< n; ++l )
                x|= ans[i][l];

            if( x!= a[i][j] ){
                is= false;
                break;
            }

        }

        if( !is )
            break;

    }

    if( !is ){
        cout << "NO\n";
    }else{
        cout << "YES\n";
        for( int i= 0; i< m; ++i ){
            for( int j= 0; j< n; ++j )
                cout << ans[i][j] << ' ';
            cout << '\n';
        }

    }

}
