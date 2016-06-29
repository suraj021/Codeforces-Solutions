#include<bits/stdc++.h>
using namespace std;

int g[26]= {0};
int c[26]= {0};
bool present[26]= {false};

int main(){

    string s, t;
    int ans= 0;
    bool make= true;

    cin >> s >> t;

    for( int i= 0; i< (int)t.length(); ++i )
        g[t[i]-'a']++;

    for( int i= 0; i< (int)s.length(); ++i )
        c[s[i]-'a']++;

    for( int i= 0; i< 26; ++i ){
        if( g[i] > 0 && c[i] <= 0 ){
            make= false;
            break;
        }
        if( g[i] > c[i] ){
            ans+= c[i];
        }else{
            ans+= g[i];
        }
    }

    if( !make ){
        cout << -1;
        return 0;
    }

    cout << ans;

    return 0;
}
