#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define ff first
#define ss second
#define pb push_back
#define mod 1000000007

int sol( int n, ll k ){
    ll x= pow( 2, n-1 );
    if( k== x ){
        return n;
    }

    if( k < x )
        sol( n-1, k );
    else
        sol( n-1, k-x );
}

int main(){

    int n;
    ll k;

    cin >> n >> k;

    int i= sol( n, k );

    cout << i << endl;
}
