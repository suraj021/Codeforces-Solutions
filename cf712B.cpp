#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

int main(){

    string s;
    int l, r, u, d, n;
    int x, y;

    x= y= 0;

    cin >> s;

    l= r= u= d= 0;
    n= (int)s.length();

    for( int i= 0; i< n; ++i ){
        if( s[i]== 'L' ){
            l++;
            x--;
        }
        if( s[i]== 'R' ){
            r++;
            x++;
        }
        if( s[i]== 'U' ){
            u++;
            y++;
        }
        if( s[i]== 'D' ){
            d++;
            y--;
        }
    }

    if( x== 0 && y== 0 ){
        cout << 0 << endl;
        return 0;
    }

    if( (abs(x) + abs(y))%2== 0 ){
        cout << ( abs(x)+abs(y) )/2 << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}
