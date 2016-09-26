#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

int a[100];

int main(){

    int n;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        cin >> a[i];
    }

    if( n== 1 ){
        if( a[0]== 0 )
            cout << "UP";
        else if( a[0]== 15 )
            cout << "DOWN";
        else
            cout << -1 ;
        cout << endl;

        return 0;
    }

    if( a[n-1] > a[n-2] ){

        if( a[n-1]== 15 )
            cout << "DOWN";
        else
            cout << "UP";

    }else{
        if( a[n-1]== 0 )
            cout << "UP";
        else
            cout << "DOWN";
    }

    cout << endl;

    return 0;
}
