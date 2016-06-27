#include <bits/stdc++.h>
using namespace std;

int a[10005];

int main(){

    int n, m, d;
    int maxi= INT_MIN;
    int mini= INT_MAX;

    cin >> n >> m >> d;

    for( int i= 0; i< n*m; ++i )
        cin >> a[i];

    int pivot= a[0]%d;
    bool flag= false;

    n= n*m;

    for( int i= 0; i< n; ++i ){
        if( a[i]%d!= pivot ){
            flag= true;
            break;
        }
    }

    if( flag ){
        cout << -1;
        return 0;
    }

    sort( a, a+n );
    int median= a[n/2];

    int ans= 0;

    for( int i= 0; i< n; ++i )
        ans+= abs( a[i]-median )/d;

    cout << ans;

    return 0;
}
