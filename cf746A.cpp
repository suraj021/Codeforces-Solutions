#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define ff first
#define ss second
#define pb push_back
#define mod 1000000007

int main(){

    int a,b,c;

    cin >> a >> b >> c;

    int i= 0;

    while( a > 0 && b > 0 && c > 0 ){
        a-= 1;
        b-= 2;
        c-= 4;
        i++;
    }

    if( a < 0 || b < 0 || c < 0 )
        i--;

    int ans= 0;

    ans= 7*i;

    cout << ans << endl;

}
