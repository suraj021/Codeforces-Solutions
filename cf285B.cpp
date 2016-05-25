#include <bits/stdc++.h>
using namespace std;

bool used[100005];
int tr[100005];

int main(){

    memset( used, false, sizeof used );

    int n, s, t;

    cin >> n >> s >> t;
    for( int i= 1; i<= n; ++i )
        cin >> tr[i];

    if( s== t ){
        cout << 0 << endl;
        return 0;
    }

    used[s]= true;

    long cnt= 0;
    bool flag= true;

    while( true ){

        s= tr[s];

        //cout << s << ' ';

        if( used[s] ){
            flag= false;
            break;
        }

        cnt++;

        if( s== t ){
            break;
        }
    }

    if( flag )
        cout << cnt << endl;
    else
        cout << "-1\n";

    return 0;
}
