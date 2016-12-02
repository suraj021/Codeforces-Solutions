#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< long, long > pii;

#define ff first
#define ss second
#define mod 1000000007
#define pb push_back

long X, Y;

ll dis[10];
char who[10];

ll dist( long x, long y ){

    if( abs( X-x )== abs( Y-y ) )
        return abs( X-x );
    if( X== x )
        return abs( Y-y );
    if( Y== y )
        return abs( X-x );
}

int direction( long x, long y ){

    if( x== X ){
        if( y < Y )
            return 8;
        else
            return 4;
    }
    if( y== Y ){
        if( x < X )
            return 2;
        else
            return 6;
    }

    if( y < Y ){
        if( x < X )
            return 1;
        else
            return 7;
    }

    if( y > Y ){
        if( x < X )
            return 3;
        else
            return 5;
    }
}

int main(){

    for( int i= 1; i<= 8; ++i ){
        dis[i]= 1ll*1e18;
        who[i]= '?';
    }

    int n;
    long x, y ;
    char c;

    cin >> n;
    cin >> X >> Y;

    for( int i= 0; i< n; ++i ){
        cin >> c >> x >> y;

        if( abs( X-x )!= abs( Y-y ) ){
            if( X!= x && Y!= y )
                continue;
        }

        int dir= direction( x, y );

        ll d= dist( x, y );

        if( who[dir]== '?' ){
            who[dir]= c;
            dis[dir]= d;
        }else{

            if( dis[dir] > d ){
                who[dir]= c;
                dis[dir]= d;
            }

        }

    }

    bool flag= false;

    for( int i= 1; i<= 8; ++i ){
        if( i%2== 0 ){
            if( who[i]== 'Q' || who[i]== 'R' ){
                flag= true;
                break;
            }
        }else{
            if( who[i]== 'Q' || who[i]== 'B' ){
                flag= true;
                break;
            }
        }
    }

    if( flag )
        cout << "YES";
    else
        cout << "NO";

}

