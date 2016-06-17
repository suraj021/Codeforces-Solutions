#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

int main(){

    bool flag= false;
    long n;

    cin >> n;

    long limitA= 811;
    long limitB= 8111;

    for( int a= 0; a<= limitA; ++a ){
        for( int b= 0; b<= limitB; ++b ){
            long c= n - 123456*b - 1234567*a;
            if( c >= 0 && c%1234 == 0 ){
                flag= true;
                //cout << a << ' ' << b << ' ' << c << endl;
                break;
            }
        }
        if( flag )
            break;
    }

    if( flag )
        cout << "YES\n";
    else
        cout << "NO\n";
}
