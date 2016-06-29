#include <bits/stdc++.h>
using namespace std;

int ans[105][105];
int a[105];

int main(){

    int n, k;
    int maxi= INT_MIN;
    int mini= INT_MAX;

    cin >> n >> k;

    for( int i= 0; i< n; ++i ){
        cin >> a[i];

        if( a[i] > maxi )
            maxi= a[i];
        if( a[i] < mini )
            mini= a[i];
    }

    if( maxi-mini > k ){
        cout << "NO\n";
        return 0;
    }

    for( int i= 0; i< n; ++i ){
        int x= 1;
        for( int j= 0; j< a[i]; ++j ){
            ans[i][j]= x%k;
            if( !ans[i][j] )
                ans[i][j]= k;
            x++;
        }
    }

    cout << "YES\n";

    for( int i= 0; i< n; ++i ){
        for( int j= 0; j< a[i]; ++j ){
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }

}
