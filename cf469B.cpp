#include <bits/stdc++.h>
using namespace std;

typedef pair< int, int > pii;

pii z[51];
pii x[51];

int main(){

    int p, q, l, r;

    cin >> p >> q >> l >> r ;

    for( int i= 0; i< p; ++i ){
        cin >> z[i].first >> z[i].second;
    }

    for( int i= 0; i< q; ++i )
        cin >> x[i].first >> x[i].second;

    sort( z, z+p );
    sort( x, x+q );

    int ans= 0;
    bool flag;

    for( int i= l; i<= r; ++i ){
        for( int j= 0; j< q; ++j ){

            flag= false;
            int a= x[j].first + i;
            int b= x[j].second + i;

            for( int k= 0; k< p; k++){

                if( a >= z[k].first && a <= z[k].second  ){
                    flag= true;
                    break;
                }else if( b >= z[k].first && b <= z[k].second ){
                    flag= true;
                    break;
                }else if( a >= z[k].first && b <= z[k].second ){
                    flag= true;
                    break;
                }else if( a <= z[k].first && b >= z[k].second ){
                    flag= true;
                    break;
                }
            }

            if( flag )
                break;

        }

        if( flag )
            ans++;

    }

    cout << ans << endl;

}
