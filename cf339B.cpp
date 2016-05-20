#include <bits/stdc++.h>
using namespace std;

int w[100005];

int main(){

    int n, m, last;
    long long ans= 0;

    cin >> n >> m;

    for( int i= 0; i< m; ++i )
        cin >> w[i];

    ans+= w[0]-1;
    last= w[0];

    for( int i= 1; i< m; ++i ){
        if( w[i] < last ){
            ans+= ( n - last + w[i] );
            last= w[i];
        }else if( w[i] > last ){
            ans+= ( w[i] - last );
            last= w[i];
        }

        //cout << ans << ' ' << last << '\n';
    }

    cout << ans;

    return 0;
}
