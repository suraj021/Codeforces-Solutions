#include <bits/stdc++.h>
using namespace std;

int a[100005];

int main(){

    int n, k;

    cin >> n >> k;

    if( k >= n ){
        cout << -1;
        return 0;
    }else if( k== n-1 ){

        for( int i= 1; i<= n; ++i )
            cout << i << ' ' ;
        return 0;
    }

    for( int i= 2; i<= k+1; ++i )
        a[i]= i;

    for( int i= n; i > k+2; --i ){
        a[i]= i-1;
    }

    a[k+2]= 1;

    a[1]= n;

    for( int i= 1; i<= n; ++i )
        cout << a[i] << ' ';

}
