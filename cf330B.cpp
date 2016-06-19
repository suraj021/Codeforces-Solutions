#include <bits/stdc++.h>
using namespace std;

bool can_be_used[1005];

int main(){

    memset( can_be_used, true, sizeof( can_be_used ) );

    int n, m, x, y;

    cin >> n >> m;

    for( int i= 0; i< m; ++i ){
        cin >> x >> y ;
        can_be_used[x]= false;
        can_be_used[y]= false;
    }

    int center;

    for( int i= 1; i<= n; ++i ){
        if( can_be_used[i] ){
            center= i;
            break;
        }
    }

    //cout << center << endl;

    cout << (n-1) << endl;

    for( int i= 1; i<= n; ++i ){
        if( i!= center ){
            cout << center << ' ' << i << endl;
        }
    }

    return 0;
}
