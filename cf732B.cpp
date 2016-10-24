#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back
#define ff first
#define ss second

int a[1005];

int main(){

    int n, k, cnt= 0;

    cin >> n >> k;;

    for( int i= 0; i< n; ++i ){
        cin >> a[i];
    }

    for( int i= 0; i< n-1; i++ ){
        if( a[i]+a[i+1] < k ){
            cnt+= k - ( a[i]+a[i+1] );
            a[i+1]+= k - ( a[i]+a[i+1] );
        }
    }

    cout << cnt << endl;
    for( int i= 0; i< n; ++i )
        cout << a[i] << ' ';

}
