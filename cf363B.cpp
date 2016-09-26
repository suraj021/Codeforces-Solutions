#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

int h[500005];

int main(){

    int n, k;

    cin >> n >> k;

    for( int i= 0; i< n; ++i )
        cin >> h[i];

    if( k== n ){
        cout << 1 << endl;
        return 0;
    }

    int curr_h= 0, ans= INT_MAX, id;

    for( int i= 0; i< k; ++i )
        curr_h+= h[i];

    if( ans > curr_h ){
        ans= curr_h;
        id= 0;
    }

    for( int i= k; i< n; ++i ){
        curr_h-= h[i-k];
        curr_h+= h[i];

        if( ans > curr_h ){
            ans= curr_h;
            id= i-k+1;
        }
    }

    cout << id+1 << endl;
    return 0;
}
