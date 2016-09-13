#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;
#define mod 10007

int a[100005], b[100005];

int main(){

    int n;
    long long ans= 0;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        cin >> a[i];
        b[i]= a[i];
    }

    sort( a, a+n );
    sort( b, b+n );
    reverse( b, b+n );

    for( int i= 0; i< n; ++i ){
        ans+= ((a[i]%mod)*(b[i]%mod))%mod;
    }

    ans%= mod;

    cout << ans << endl;
}
