#include <bits/stdc++.h>

using namespace std;

map< string, string > m;

int main(){

    int N, M;
    string s, a, b;

    cin >> N >> M ;

    while( M-- ){
        cin >> a >> b;
        m[a]= b;
    }

    while( N-- ){

        cin >> s;

        if( s.length() <= m[s].length() ){
            cout << s << ' ';
        }else{
            cout << m[s] << ' ';
        }

    }
}
