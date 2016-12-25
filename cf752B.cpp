#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define ff first
#define ss second
#define pb push_back
#define mod 1000000007

map< char, char > m;
set< pair< char, char > > st;

int main(){

    string s, t;

    cin >> s ;
    cin >> t;

    int n= (int) s.length();

    for( int i= 0; i< n; ++i ){
        if( m.find( s[i] )!= m.end() ){
            if( m[s[i]] != t[i] ){
                cout << -1 << endl;
                return 0;
            }
        }else if( m.find( t[i] )!= m.end() ){
            if( m[t[i]] != s[i] ){
                cout << -1 << endl;
                return 0;
            }
        }else{
            m[s[i]]= t[i];
            m[t[i]]= s[i];
        }
        //cout << '1' << ' ';
    }

    //cout << endl <<"here\n";

    if( m.size()!= 0 ){
        map<char,char>::iterator it= m.begin();

        while( it != m.end() ){
            if( st.find( {it->ff, it->ss} )== st.end() && st.find( {it->ss, it->ff} )== st.end() ){
                if( it->ff != it->ss )
                    st.insert( {it->ff, it->ss} );
            }
            it++;
        }

        cout << st.size() << endl;
        set< pair<char,char> >::iterator is= st.begin();

        while( is!= st.end() ){
            cout << is->ff << ' ' << is->ss << endl;
            is++;
        }

    }else{
        cout << 0 << endl;
    }

    return 0;
}