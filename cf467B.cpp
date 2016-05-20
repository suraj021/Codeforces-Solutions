#include <bits/stdc++.h>

using namespace std;

int x[1009];

int main(){

    int n, m, k;

    cin >> n >> m >> k;

    for( int i= 1; i<= m+1; ++i )
        cin >> x[i];

    int ans= 0;
    int me= x[m+1];

    for( int i= 1; i<= m; ++i ){
        if( __builtin_popcount( x[i]^me ) <= k )
            ans++;
    }

    cout << ans << endl;

    return 0;

}
