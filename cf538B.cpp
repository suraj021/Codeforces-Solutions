#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

vector< int > v;

int num( int c[6], int n ){

    //cout << n << endl;
    reverse( c, c+n );
    int x= 0;

    for( int i= 0; i< n; ++i ){
        x+= pow( 10, n-i-1 )*c[i];
        //cout << x << ' ';
    }

    return x;
}

int main(){

    int n;

    cin >> n;

    if( n== 1000000 ){
        cout << 1 << endl;
        cout << n << endl;
        return 0;
    }

    while( n > 0 ){

        int x= n;
        int i= 0, c[6];

        while( x > 0 ){
            int r= x%10;
            x/= 10;

            if( r > 0 )
                c[i]= 1;
            else
                c[i]= 0;
            i++;
        }

        int y= num( c, i );

        n-= y;
        v.push_back( y );

    }

    cout << v.size() << endl;
    for( int i= 0; i< (int)v.size(); ++i ){
        cout << v[i] << ' ';
    }

}
