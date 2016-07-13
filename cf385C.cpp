#include <bits/stdc++.h>
using namespace std;

long a[300005];

int main(){

    int n;
    long long ans= 0;

    cin >> n;

    for( int i= 1; i<= n; ++i ){
        cin >> a[i];
    }

    sort( a+1, a+n+1 );

    for( int i= 1; i<= n; ++i ){
        ans+= abs( i-a[i] );
    }

    cout << ans << endl;
}
