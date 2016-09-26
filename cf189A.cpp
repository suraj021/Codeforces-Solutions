#include <bits/stdc++.h>
using namespace std;

int dp[4004];

int main(){

    int n, a, b, c;

    cin >> n >> a >> b >> c;

    fill( dp, dp+n+1, -1e9 );

    dp[0]= 0;

    for( int i= a; i<= n; ++i )
        dp[i]= max( dp[i], dp[i-a]+1 );
    for( int i= b; i<= n; ++i )
        dp[i]= max( dp[i], dp[i-b]+1 );
    for( int i= c; i<= n; ++i )
        dp[i]= max( dp[i], dp[i-c]+1 );

    cout << dp[n] << endl;

    return 0;
}
