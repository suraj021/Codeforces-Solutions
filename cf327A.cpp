#include <bits/stdc++.h>
using namespace std;

int a[105];

int main(){

    int n;
    int s= 0;

    cin >> n ;

    for( int i= 0; i< n; ++i ){
        cin >> a[i];
        s+= a[i];
    }

    int maxi= 0;

    for( int i= 0; i< n; ++i ){
        for( int j= i; j < n; ++j ){
            int t= s;
            for( int k= i; k <= j; ++k ){
                if( a[k] )
                    t--;
                else
                    t++;
            }
            if( t > maxi )
                maxi= t;
        }
    }

    cout << maxi ;
}
