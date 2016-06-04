#include <bits/stdc++.h>
using namespace std;

long a[100005];
long long presum[100005]= {0};

int main(){

    long n, h, k;
    long long timer= 0;

    cin >> n >> h >> k;

    cin >> a[0];
    presum[0]= a[0];

    for( int i= 1; i< n; ++i ){
        cin >> a[i];
        presum[i]= presum[i-1]+a[i];
    }

    int i= 0;
    long long curr_h= 0;

    while( i < n ){

        while( curr_h+a[i] <= h && i < n ){
            curr_h+= a[i];
            ++i;
        }

        long x= curr_h/k;

        if( x== 0 ){
            x++;
        }

        curr_h-= x*k;
        timer+= x;

        if( curr_h < 0 )
            curr_h= 0;

        //cout << i << ' ' << curr_h << ' ' << timer << endl;
    }

    if( curr_h ){

        long x= curr_h/k;

        if( x== 0 )
            x++;
        timer+= x;

    }

    cout << timer << endl;

    return 0;
}
