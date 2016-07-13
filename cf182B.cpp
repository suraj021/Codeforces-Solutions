#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, d, a;

    cin >> d;
    cin >> n;

    long long turn= 0;

    for( int i= 0; i< n; ++i ){
        cin >> a;
        if( a < d && i!= n-1 ){
            turn+= ( d - a );
        }
    }

    cout << turn << endl;
}
