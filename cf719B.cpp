#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

int main(){

    int n, ans;
    string s;

    cin >> n;
    cin >> s;

    int r, b;
    r= b= 0;

    for( int i= 0; i< n; ++i ){
        if( i%2== 0 && s[i]!= 'r' )
            b++;
        else if( i%2!= 0 && s[i]!= 'b' )
            r++;
    }

    ans= min( r, b ) + abs( r-b );

    r= b= 0;

    for( int i= 0; i< n; ++i ){
        if( i%2== 0 && s[i]!= 'b' )
            r++;
        else if( i%2!= 0 && s[i]!= 'r' )
            b++;
    }

    ans= min( ans, min( r, b ) + abs( r-b ) );

    cout << ans ;
}
