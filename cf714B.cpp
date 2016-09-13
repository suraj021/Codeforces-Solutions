#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

set< long > s;

int main(){

    int n, x;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        cin >> x;
        s.insert( x );
    }

    if( s.size() == 1 || s.size() == 2 ){
        cout << "YES\n";
    }else if( s.size() == 3 ){
        int a[3], i= 0;

        for( auto it= s.begin(); it!= s.end(); ++it ){
            a[i]= *it;
            ++i;
        }

        int x= ( a[2] - a[0] )/2;

        a[0]+= x;
        a[2]-= x;

        if( a[0]== a[1] && a[1]== a[2] )
            cout << "YES\n";
        else
            cout << "NO\n";
    }else{
        cout << "NO\n";
    }

}
