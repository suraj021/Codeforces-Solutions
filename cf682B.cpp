#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

long a[100005];
int p[100005];

int main(){

    int n;

    cin >> n;

    for( int i= 1; i<= n; ++i ){
        cin >> a[i];
    }

    sort( a+1, a+n+1 );

    int now= 1;

    for( int i= 1; i<= n; ++i ){
        if( a[i] >= now ){
            a[i]= now;
            ++now;
        }else if( a[i]== now ){
            now++;
        }

    }

    //for( int i= 1; i<= n; ++i ){
      //  cout <<  a[i] << ' ';
    //}

    cout << now;



}
