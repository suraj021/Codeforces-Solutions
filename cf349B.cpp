#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< long, long > pii;

int a[100005];

int main(){

    int n, mini;
    int l= 0;

    cin >> n;

    for( int i= 1; i<= 9; ++i ){
        cin >> a[i];

        if( n/a[i] > l ){
            l= n/a[i];
            mini= a[i];
        }
    }

    //cout << l << ' ' << mini << endl;

    if( l== 0 ){
        cout << -1 << endl;
        return 0;
    }

    int i= 9;

    while( l && i ){

        //cout << '\t' <<  a[i] << ' ' << l << ' ' << (n-a[i])/mini << '\n';

        while( ( i > 0 ) && ( a[i] <= n ) && ( l > 0 ) && ( (n-a[i])/mini == l-1 ) ){
            cout << i;
            n-= a[i];
            l--;
        }

        i--;
    }

}

