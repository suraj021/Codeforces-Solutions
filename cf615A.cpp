#include <bits/stdc++.h>

using namespace std;

bool connect[105];

int main()
{
    int n, m;;
    int x, y;

    memset( connect, 0, sizeof( connect ) );

    cin >> n >> m;

    for( int i= 0; i< n; ++i ){
            cin >> x;

            while( x-- ){
                cin >> y;
                connect[y]= true;
            }
    }

    bool flag= false;

    for( int i= 1; i<= m; ++i )
        if( !connect[i] ){
            cout << "NO" ;
            flag= true;
            break;
        }

    if( !flag )
        cout << "YES";


}