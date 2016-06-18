#include <bits/stdc++.h>
using namespace std;

bool isLeap( int y ){
    return ( ( y%400== 0 ) || ( y%4 == 0 && y%100!= 0 ) );
}

int main(){

    int y;

    cin >> y;

    bool l= isLeap( y );
    int d= 0;

    while( true ){

        if( isLeap( y ) ){
            d+= 366%7;
        }else{
            d+= 365%7;
        }

        //cout << d << ' ';

        y++;
        d= d%7;

        //cout << d << ' ' << y << endl;

        if( d== 0 && l== isLeap( y ) ){
            break;
        }

    }

    cout << y;
}
