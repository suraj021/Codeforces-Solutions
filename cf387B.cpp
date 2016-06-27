#include <bits/stdc++.h>
using namespace std;

long a[3005];
long b[3005];

int main(){

    int n, m;
    int x;
    int ans= 0;

    cin >> n >> m;

    for( int i= 0; i< n; ++i ){
        cin >> a[i];
    }

    for( int i= 0; i< m; ++i )
        cin >> b[i];

    int i= 0, j= 0;

    while( i < n &&  j < m ){

        if( b[j] >= a[i] )
            i++;

        ++j;

    }

    cout << ( n-i );
}
