#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

long t[100005];
long d[100005];

int main(){

    int n;
    long c;

    cin >> n >> c;

    for( int i= 0; i< n; ++i )
        cin >> t[i];

    for( int i= n-1; i> 0; --i ){
        d[i-1]= t[i] - t[i-1];
    }

    int ans= 0;

    for( int i= n-2; i >= 0; --i ){
        if( d[i] <= c )
            ans++;
        else
            break;
    }

    ans++;

    cout << ans <<  endl;

}

