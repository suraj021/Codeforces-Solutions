#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< ll, ll > pll;

long a[105];

bool sorted( int n ){

    for( int i= 1; i< n; ++i )
        if( a[i] > a[i+1] )
            return false;

    return true;
}

int main(){

    int n;

    scanf( "%d", &n );

    for( int i= 1; i<= n; ++i ){
        cin >> a[i];
    }

    if( sorted( n ) ){
        return 0;
    }

    while( !sorted( n ) ){

        for( int i= 1; i< n; ++i ){
            int l, r;
            l= r= i;

            while( (r+1) <= n && a[r] > a[r+1] ){
                swap( a[r], a[r+1] );
                r+= 2;
                //cout << '\t' << r << endl;
            }

            if( r+1 <= n && a[r] > a[r+1] ){
                r++;
            }else{
                r--;
            }

            if( r > l ){
                printf( "%d %d\n", l, r );
            }

            //for( int i= 1; i<= n; ++ i ){
              //  cout << "\t" << a[i] << ' ';
            //}
            //cout << endl;
        }

    }

}
