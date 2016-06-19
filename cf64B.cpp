#include <bits/stdc++.h>
using namespace std;

int p[105];

int main(){

    int n, m;
    int sum= 0;

    cin >> n >> m;

    for( int i= 0; i< n; ++i )
        cin >> p[i];

    sort( p, p+n );

    for( int i= 0; i< m && p[i] < 0 ; ++i )
        sum+= ( -p[i] );

    cout << sum ;
}
