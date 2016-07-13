#include <bits/stdc++.h>
using namespace std;

typedef pair< int, int > pii;

pii a[1005];

int main(){

    freopen( "input.txt", "r", stdin );
    freopen( "output.txt", "w", stdout );

    int n, k, x;

    cin >> n >> k;

    for( int i= 1; i<= n; ++i ){
        cin >> x;
        a[i].first= x;
        a[i].second= i;
    }

    sort( a+1, a+n+1 );

    int i= n-k+1;

    cout << a[i].first << endl;

    while( i <= n ){
        cout << a[i].second << ' ';
        i++;
    }

    return 0;
}


// 234B