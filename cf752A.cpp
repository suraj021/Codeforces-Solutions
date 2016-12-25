#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define ff first
#define ss second
#define pb push_back
#define mod 1000000007

int main(){

    int n, m;
    ll k;

    cin >> n >> m >> k;

    int l, r;

    if( k%(2*m)== 0 ){
        l= k/(2*m);
    }else{
        l= k/(2*m) + 1;
    }

    int x= k/2;

    if( k%2!= 0 )
        x++;

    r= x%m;

    if( x%m== 0 )
        r= m;

    cout << l << ' ' << r << ' ' << ((k%2==0)?'R':'L');
}
