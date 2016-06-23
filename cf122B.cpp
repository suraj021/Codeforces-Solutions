#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    int f, se;

    f= se= 0;

    cin >> s;

    for( int i= 0; i< (int)s.length(); ++i ){
        if( s[i]== '4' )
            f++;
        else if( s[i]== '7' )
            se++;
    }

    if( !f && !se )
        cout << -1 ;
    else
        cout << ( se>f?7:4 );

}
