#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

int main(){

    int n, x, y, a, b;

    x= y= 0;

    cin >> n;

    while( n-- ){
        cin >> a >> b;

        if( a > b )
            x++;
        else if( a < b )
            y++;
    }

    if( x > y )
        cout << "Mishka";
    else if(  x== y ){
        cout << "Friendship is magic!^^";
    }else{
        cout << "Chris";
    }

}
