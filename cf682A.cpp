#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

long long a[5];
long long b[5];

int main(){

    long n, m;

    cin >> n >> m;

    for( int i= 1; i<= n; ++i )
        a[i%5]++;
    for( int i= 1; i<= m; ++i )
        b[i%5]++;

    long long ans= a[0]*b[0]+ a[1]*b[4] + a[2]*b[3] + a[3]*b[2] + a[4]*b[1];

    cout << 1LL*ans;

}
