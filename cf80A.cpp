#include <bits/stdc++.h>
using namespace std;

bool isPrime( int n ){

    if( n%2== 0 )
        return false;

    for( int i= 3; i*i <= n; i+= 2 )
        if( n%i== 0 )
            return false;

    return true;

}

int nextPrime( int n ){

    if( n== 2 )
        n= 3;
    else
        n+= 2;

    while( true ){
        //cout << n << ' ';
        if( isPrime( n ) )
            return n;
        n+= 2;
    }

}

int main(){

    int n, m;

    cin >> n >> m;

    if( nextPrime( n ) == m )
        cout << "YES";
    else
        cout << "NO";

}
