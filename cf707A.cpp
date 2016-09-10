#include <bits/stdc++.h>
using namespace std;

char a[105][105];

int main(){

    int n, m;

    cin >> n >> m;

    for( int i= 0; i< n; ++i )
        for( int j= 0; j< m; ++j )
            cin >> a[i][j];

    bool flag= false;

    for( int i= 0; i< n; ++i )
    for( int j= 0; j< m; ++j ){
        if( a[i][j]!= 'W' && a[i][j]!= 'G' && a[i][j]!= 'B' )
            flag= true;
    }

    if( flag )
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
}
