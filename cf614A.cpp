#include <bits/stdc++.h>

using namespace std;

int main(){

    long long int l, r, k;
    bool flag= false;

    cin >> l >> r >> k;

    long long int ans= k;

    if( l == 1 ){
        flag= true;
        cout << 1 << ' ';
    }
    if( ans >= l && ans <= r ){
        cout << ans << ' ';
        flag= true;
    }
    while( true ){

        ans= ans*k;

        if( ans >= l && ans <= r ){
            flag= true;
            cout << ans << ' ';
        }
        if( ans >= r )
            break;

    }

    if( !flag ){
        cout << -1 ;;
    }

    
}
