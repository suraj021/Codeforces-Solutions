/*
	// Author: Suraj Bora
	// Email: surajbora021@gmail.com

*/

#include <bits/stdc++.h>

using namespace std;

long f[27];
set< long long > s;
pair< set<long>::iterator, bool> p;

int main(){

    int n;
    long long ans= 0;

    cin >> n;

    for( int i= 0; i< n; ++i )
        cin >> f[i];

    sort( f, f+n );

    ans+= f[n-1];
    s.insert( f[n-1] );

    for( int i= n-2; i>= 0; --i ){

        while( (s.insert( f[i] )).second == false && f[i]!= 0 ){
            f[i]--;
        }

        ans+= f[i];

        //cout << ans << endl;;
    }

    cout << ans;

}
