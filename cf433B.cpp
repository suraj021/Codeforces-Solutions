#include <bits/stdc++.h>
using namespace std;

long a[100005], b[100005];
long long suma[100005], sumb[100005];

int main(){

    int n, q, x, l, r;

    cin >> n;

    for( int i= 1; i<= n; ++i ){
        cin >> a[i];
        b[i]= a[i];
    }

    sort( b+1, b+n+1 );
    //reverse( b+1, b+n+1 );

    for( int i= 1; i<= n; ++i ){
        suma[i]= suma[i-1] + a[i];
        sumb[i]= sumb[i-1] + b[i];
    }

    cin >> q;

    while( q-- ){

        cin >> x >> l >> r;

        if( x== 1 ){
            cout << 1LL*(suma[r] - suma[l-1]) << endl;
        }else
            cout << 1LL*(sumb[r] - sumb[l-1]) << endl;

    }

}
