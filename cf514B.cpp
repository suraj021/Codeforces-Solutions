#include <bits/stdc++.h>
using namespace std;

set< pair< int, int > > s;

int gcd( int a, int b ){
    if( b== 0 )
        return a;
    return gcd( b, a%b );
}

int main(){

    int n, x0, y0, x, y;

    cin >> n >> x0 >> y0;

    for( int i= 0; i< n; ++i ){
        cin >> x >> y;

        int den= x - x0 ;
        int num= y - y0 ;
        int g= gcd( num, den );
        num/= g;
        den/= g;

        if( den < 0 || ( den== 0 && num < 0 ) ){
            den*= -1;
            num*= -1;
        }

        s.insert( { num, den } );
    }

    cout << s.size();
}
