#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[105], t, n, ans= 0;;

    cin >> n >> t;

    for( int i= 0; i< n; ++i )
        cin >> a[i];

    t--;

    int i= t-1, j= t+1;

    int dist= 1;

    if( a[t] )
        ans++;

    while( true ){

        //cout << dist << ' ';

        if( t-dist >= 0 && a[t-dist] &&  t+dist < n && a[t+dist] ){
            ans+= 2;
        }else if( t-dist < 0 &&  t+dist < n && a[t+dist]  ){
            ans++;
        }else if( t-dist >= 0 && a[t-dist] &&  t+dist >= n   ){
            ans++;
        }

        //cout << ans << endl;;

        dist++;

        if( t-dist < 0 && t+dist >= n )
            break;
    }

    cout << ans << endl;
}
