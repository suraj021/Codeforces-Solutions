#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

int main(){

    int n;
    string s;
    int a, d;
    a= d= 0;

    cin >> n;
    cin >> s;

    for( int i= 0; i< n; ++i ){
        if( s[i]== 'A' )
            a++;
        else
            d++;
    }

    if( a== d ){
        cout << "Friendship";
    }else if( a > d )
        cout << "Anton";
    else
        cout << "Danik";
}
