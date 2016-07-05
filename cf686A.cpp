#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< ll, ll > pll;

int main(){

    long long x, n, left, d, child= 0;
    char c;

    cin >> n >> x;

    left= x;

    while( n-- ){

        cin >> c >> d;

        if( c== '-' ){
            if( left < d ){
                child++;
            }else{
                left-= d;
            }
        }else{

            left+= d;

        }

    }

    cout << left << ' ' << child;

}
