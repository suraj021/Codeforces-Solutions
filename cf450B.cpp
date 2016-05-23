#include <bits/stdc++.h>
using namespace std;

long mod= 1000000007;

long long f[7];

int main(){

    long long x , y, n;

    cin >> x >> y >> n;

    f[1]= x, f[2]= y;

    for( int i= 3; i<= 6; ++i ){
        f[i]= f[i-1] - f[i-2];
    }

    int z= n%6;

    if( z== 0 ){
        z= 6;
    }

    while( f[z] < 0 )
        f[z]+= mod;

    cout << ((f[z])%mod) << endl;
}
