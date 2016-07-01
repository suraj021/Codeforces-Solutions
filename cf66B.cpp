#include <bits/stdc++.h>
using namespace std;

int a[1005];

int main(){

    int n;
    int maxi= INT_MIN;

    cin >> n;

    for( int i= 0; i< n; ++i )
        cin >> a[i];

    for( int i= 0; i< n; ++i ){
        int l= 1;
        int j= i-1;
        int last= a[i];
        //go left;
        while( j >= 0 && a[j] <= last ){
            l++;
            last= a[j];
            j--;
        }
        // go right;
        j= i+1;
        last= a[i];
        while( j < n && a[j] <= last ){
            l++;
            last= a[j];
            j++;
        }

        if( l > maxi )
            maxi= l;
    }

    cout << maxi;
}
