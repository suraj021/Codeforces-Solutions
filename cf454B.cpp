#include <bits/stdc++.h>

using namespace std;

int a[100005];
bool f[100005];

int main(){

    int n;
    int cnt= 0;

    cin >> n;

    for( int i= 0; i< n; ++i )
        cin >> a[i];

    for( int i= 0; i< n; ++i ){
        if( a[i] > a[(i+1)%n] ){
            f[i]= true;
            cnt++;
        }
    }

    if( cnt== 0 ){
        cout << 0 << endl;
    }else if( cnt > 1 ){
        cout << "-1\n";
    }else{
        for( int i= 0; i< n; ++i )
        if( f[i] ){
            cout << ( n-i-1 ) << endl;
            break;
        }
    }

}
