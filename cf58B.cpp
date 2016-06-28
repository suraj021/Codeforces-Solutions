#include <bits/stdc++.h>
using namespace std;

vector< int > v;

int main(){

    int n;

    int i= 1;

    cin >> n;

    for( int i= n; i> 0; --i ){
        if( n%i== 0 ){
            n= i;
            cout << n << ' ';
        }
    }
}