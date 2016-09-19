#include <bits/stdc++.h>
using namespace std;

int f[100005];
long long dp[100005];

int main(){

    int n;

    cin >> n;

    memset( f, 0, sizeof f );

    for( int i= 0; i< n; ++i ){
        int x;
        cin >> x;
        f[x]++;
    }

    dp[0]= 0;
    dp[1]= f[1];

    for( int i= 2; i<= 100000; ++i ){
        dp[i]= max( dp[i-1], dp[i-2] + 1ll*f[i]*i );
    }

    cout << dp[100000];

}
