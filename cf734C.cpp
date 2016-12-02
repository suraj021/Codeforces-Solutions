#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< long, long > pii;

#define ff first
#define ss second
#define mod 1000000007
#define pb push_back

ll min( ll a, ll b ){
    if( a <= b )
        return a;
    else
        return b;
}

const int SIZE= 200005;

long a[SIZE+1], b[SIZE+1], c[SIZE+1], d[SIZE+1];

int main(){

    long n, m, k, x, s;

    cin >> n >> m >> k;
    cin >> x >> s;

    for( int i= 0; i< m; ++i )
        cin >> a[i];

    for( int i= 0; i< m; ++i )
        cin >> b[i];

    for( int i= 0; i< k; ++i )
        cin >> c[i];

    for( int i= 0; i< k; ++i )
        cin >> d[i];

    // no spells;
    ll ans= 1ll*n*x;

    //cout << ans << ' ';

    // only spell of type 1;
    for( int i= 0; i < m; ++i ){
        if( b[i] <= s )
            ans= min( ans, 1ll*n*a[i] );
    }

    //cout << ans << ' ';

    // only spell of type 2;
    for( int i= 0; i< k; ++i ){
        if( d[i] <= s ){
            ans= min( ans, 1ll*(n-c[i])*x );
        }
    }

    //cout << ans << ' ';

    // both spells used;
    for( int i= 0; i< m; ++i ){
        int id= upper_bound( d, d+k, s-b[i] ) - d;

        if( id== 0 )
            continue;
        ans= min( ans, 1ll*(n-c[id-1])*a[i] );
    }


    cout << ans ;

}
