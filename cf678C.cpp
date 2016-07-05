#include <bits/stdc++.h>
using namespace std;

long long gcd( long long a, long long b ){
    return b == 0 ? a : gcd( b, a%b );
}

long long lcm( long long a, long long b ){
    return a * ( b/gcd( a, b ) );
}

int main(){

    long long n, a, b, p, q;

    cin >> n >> a >> b >> p >> q;

    long long ans= (n/a)*p;
    ans-= 1ll*(n/lcm(a,b))*q;
    ans+= 1ll*(n/b)*q;
    ans-= (n/lcm(a,b))*p;
    ans+= (n/lcm(a,b))*( p>q?p:q );

    cout << ans;

}
