#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define ff first
#define ss second
#define pb push_back
#define mod 1000000007

int main(){

    ll n;

    cin >> n;

    if( n== 1 ){
        cout << -1 << endl;
        return 0;
    }

    cout << n << ' ' << (n+1) << ' ' << 1ll*n*(n+1) << endl;



}
