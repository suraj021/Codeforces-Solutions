#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector< string > ans;
vector< string > lower_string;
vector< string > upper_string;

string Lower_Ans( string word ){
    for( int i= 0; i< word.length(); ++i )
        word[i]= tolower( word[i] );
    return word;
}

int main(){
    ios::sync_with_stdio(false);

    int n, m;
    string t, s;

    cin >> n;
    cin >> t;
    cin >> m;

    for( int i= 0; i< m; ++i ){
        cin >> s;
        upper_string.push_back( s );
        lower_string.push_back( Lower_Ans( s ) );
    }

    s= "";

    reverse( t.begin(), t.end() );

    for( int i= 0; i< n; ++i ){

        s+= t[i];

        vector<string>::iterator it= find( lower_string.begin(), lower_string.end(), s );

        if( it != lower_string.end() ){
            int id= it - lower_string.begin();
            ans.push_back( upper_string[id] );
            s= "";
        }

    }

    for( int i= ans.size()-1; i>= 0 ; --i )
        cout << ans[i] << ' ';

}
