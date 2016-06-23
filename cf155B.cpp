#include <bits/stdc++.h>
using namespace std;

typedef pair< int, int > pii;
pii a[1005];

int main(){

    int n;

    scanf( "%d", &n );

    for( int i= 0; i< n; ++i ){
        scanf( "%d%d", &a[i].second, &a[i].first );
    }

    sort( a, a+n );

    long p= 0;
    long chances= 1;

    int i= n-1;

    while( chances && i >= 0 ){

        p+= a[i].second;
        chances+= a[i].first - 1;

        i--;

        //cout << chances << ' ' << p << endl;
    }

    cout << p;
}
