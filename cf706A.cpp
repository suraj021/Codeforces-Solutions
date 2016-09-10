#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

double sqr( double x ){
    return x*x*1.0;
}

double dist( double a, double b, double x, double y ){
    return sqrt( sqr( x-a ) + sqr( y-b ) );
}

int main(){

    double a, b, x, y, n, v;
    double mini= 10000000000.0;

    cin >> a >> b;
    cin >> n;

    for( int i= 0; i< n; ++i ){
        cin >> x >> y >> v;
        double t= (double)dist( a, b, x, y )/(v*1.0);

        //cout << t << ' ';

        if( t < mini )
            mini= t*1.0;
    }

    cout << fixed << setprecision(20) << mini << endl;
}
