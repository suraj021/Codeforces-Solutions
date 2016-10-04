#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

int main(){

    int a[3];

    cin >> a[0] >> a[1] >> a[2];

    sort( a, a+3 );

    int ans= abs( a[1]-a[0] ) + abs( a[2]-a[1] );

    cout << ans << endl;
}

