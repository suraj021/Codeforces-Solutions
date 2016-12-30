#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define ff first
#define ss second
#define pb push_back
#define mod 1000000007

int main(){

    int n, k;

    cin >> n >> k;

    int rem= 240-k;

    int x= (2*rem)/5;

    int i= 1;

    for( ; i<= n; ++i ){
        if( i*(i+1) > x )
            break;
    }

    i--;

    cout << i << endl;


}
