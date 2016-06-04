#include <bits/stdc++.h>
using namespace std;

long d[3003];

int main(){

    int n, m;

    cin >> n >> m;

    for( int i= 0; i< m; ++i )
        cin >> d[i];

    sort( d, d+m );

    if( d[m-1]== n || d[0]== 1 ){
        cout << "NO\n";
        return 0;
    }

    bool flag= false;



    for( int i= 0; i<= m-3; ++i ){

        if( d[i+1]== d[i]+1 && d[i+2]== d[i+1]+1 ){
            flag= true;
            break;
        }
    }

    if( flag ){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }

    return 0;
}
