#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, h, x;
    int ans= 0;

    cin >> n >> h;

    for( int i= 0; i< n; ++i ){
        cin >> x;
        if( x > h )
            ans+= 2;
        else
            ans+= 1;
    }

    cout << ans << endl;
}
