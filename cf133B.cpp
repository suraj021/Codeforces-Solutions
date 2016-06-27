
#include <bits/stdc++.h>
using namespace std;

#define mod 1000003
map< char, int > m;

int main(){

    m['>']= 8;
    m['<']= 9;
    m['+']= 10;
    m['-']= 11;
    m['.']= 12;
    m[',']= 13;
    m['[']= 14;
    m[']']= 15;

    string s;
    int ans= 0;

    cin >> s;

    for( int i= 0; i< (int)s.length(); ++i ){
        ans*= 16;
        ans+= m[s[i]];

        ans%= mod;

    }

    cout << ans << endl;
}
