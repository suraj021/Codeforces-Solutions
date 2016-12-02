#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

int main(){

    int k2, k3, k5, k6;

    cin >> k2 >> k3 >> k5 >> k6;

    int m= min( k2, min( k5, k6 ) );
    k2-= m;
    k5-= m;
    k6-= m;

    int n= min( k2, k3 );

    long long ans= 1ll*256*m + 1ll*32*n;

	cout << ans << endl;

}
