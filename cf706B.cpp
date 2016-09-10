#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

int a[100005];


int main(){

    int n, q;
    long x;

    cin >> n;

    for( int i= 0; i< n; ++i )
        cin >> a[i];

    sort( a, a+n );

    cin >> q;

    while( q-- ){

        cin >> x;

        int id= upper_bound( a, a+n, x ) - a;

        int ans;

        //cout << id << ' ';

        if( a[id] > x )
            ans= id;
        else if( a[id] <= x ) {
            ans= id+1;
        }

        if( ans > n )
            ans= n;

        cout << ans << endl;
    }

}
