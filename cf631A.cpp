#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

long long a[1001], b[1001];
//long long c[1001], d[1001];

int main(){

    int n;

    cin >> n;

    for( int i= 1; i<= n; ++i )
        cin >> a[i];
    for( int i= 1; i<= n; ++i )
        cin >> b[i];

    long long maxi= -1;

    for( int l= 1; l<= n; ++l ){
        for( int r= l; r<= n; ++r ){
            int x, y;
            x= y= 0;
            for( int i= l; i<= r; ++i ){
                x|= a[i];
                y|= b[i];
            }
            if( x+y > maxi )
                maxi= x+y;
        }
    }

    cout << 1ll*maxi << endl;
}
