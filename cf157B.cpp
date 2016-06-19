#include <bits/stdc++.h>
using namespace std;

#define pi 3.14159265359

double r[105];

int main(){

    int n;
    double area= 0.0;

    cin >> n;

    for( int i= 1; i<= n; ++i ){
        cin >> r[i];
    }

    sort( r, r+n+1 );

    for( int i= n; i> 0; i-=2 ){
        area+= ( r[i]*r[i] - r[i-1]*r[i-1] );
    }

    printf( "%.10f", area*pi );
}
