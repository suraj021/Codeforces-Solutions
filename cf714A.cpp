#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

int main(){

    ll a, b, l, r, k, ans;

    cin >> a >> b >> l >> r >> k;

    if( l > b || r < a ){
        cout << 0 << endl;
        return 0;
    }

    if( l <= a && r >= b ){
        ans= ( b-a+1 );
        if( k >= a && k <= b ){
            ans--;
        }
    }else if( l > a && r < b ){
        ans= ( r-l+1 );
        if( k >= l && k <= r )
            ans--;
    }else if( l <= b && l >= a && r >= b ){
        ans= ( b-l+1 );
        if( k >= l && k <= b )
            ans--;
    }else if( l <= a && r >= a && r <= b ){
        ans= ( r-a+1 );
        if( k<= r && k >= a )
            ans--;
    }

    cout << ans;

}
