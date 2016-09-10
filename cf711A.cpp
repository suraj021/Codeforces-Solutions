#include <bits/stdc++.h>
using namespace std;

char a[10004][6];

int main(){

    int n;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        for( int j= 0; j< 5; ++j )
            cin >> a[i][j];
    }

    bool yes= false;

    for( int i= 0; i< n; ++i ){
        if( a[i][0]== 'O' && a[i][1]== 'O' ){
            yes= true;
            a[i][0]= '+';
            a[i][1]= '+';
            break;
        }else if(  a[i][3]== 'O' && a[i][4]== 'O' ){
            yes= true;
            a[i][4]= '+';
            a[i][3]= '+';
            break;
        }
    }

    if( yes ){
        cout << "YES\n";
        for( int i= 0; i< n; ++i ){
            for( int j= 0; j< 5; ++j )
                cout << a[i][j];
            cout << endl;
        }
    }else{
        cout << "NO\n";
    }

}
