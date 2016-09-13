#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

long a[100005];
long b[100005];

int main(){

    int n;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        cin >> a[i];
    }

    b[n-1]= a[n-1];

    for( int i= n-2; i>= 0; --i ){
        b[i]= a[i] + a[i+1];
    }

    for( int i= 0; i< n; ++i )
        cout << b[i] << ' ';

}
