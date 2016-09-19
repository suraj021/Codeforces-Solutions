#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

int ans[101];
int maxi[101];
int mini[101];

int main(){

    int m, s;

    cin >> m >> s;

    if( s== 0 && m > 1 ){
        cout << -1 << ' ' << -1;
        return 0;
    }

    if( 9*m < s ){
        cout << -1 << ' ' << -1 << endl;
        return 0;
    }

    // make mxi array
    int i= 9, j= m-1;

    while( s > 0 && i > 0 ){

        int x= s/i;

        s= s - x*i;

        while( x > 0 ){
            maxi[j]= i;
            j--;
            x--;
        }

        i--;
    }

    bool flag= false;

    for( int i= 0; i< m; ++i ){
        if( maxi[i]== 0 ){
            flag= true;
            break;
        }
    }

    if( !flag ){
        for( int i= 0; i< m; ++i )
            cout << maxi[i] ;
        cout << ' ';
        for( int i= m-1; i>=0; --i )
            cout << maxi[i] ;
        return 0;
    }

    for( int i= 0; i< m; ++i )
        mini[i]= maxi[i];

    for( int i= 0; i < m ; ++i ){
        if( mini[i] > 0 ){
            j= i;
            break;
        }
    }

    mini[0]= 1;
    mini[j]--;

    for( int i= 0; i< m; ++i )
        cout << mini[i] ;

    cout << ' ';

    for( int i= m-1; i>=0; --i )
        cout << maxi[i] ;

}

