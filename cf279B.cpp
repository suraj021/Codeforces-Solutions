#include <bits/stdc++.h>
using namespace std;

long a[100005];
long long sum[100005];

int main(){

    int n;
    long t;
    int maxi= 0;

    cin >> n >> t;

    for( int i= 0; i< n; ++i )
        cin >> a[i];

    long long sum= 0;

    int i, j;
    i= j= 0;

    while( i < n && j < n ){

        while( j < n && sum + a[j] <= t ){
            sum+= a[j];
            ++j;
        }

        maxi= max( maxi, j-i );
        sum-= a[i];
        ++i;
    }

    cout << maxi << ' ' ;

    return 0;
}
