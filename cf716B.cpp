#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

map< char, int > m;
string s;

void work( int x ){

    //cout << x << endl;

    int y= x+25;
    char c= 'A';

    for( int i= x; i<= y; ++i ){
        if( s[i]== '?' ){
            while( m.find( c )!= m.end() ){
                c++;
            }
            s[i]= c;
            m[c]++;
        }
    }

    //cout << s.substr( x, 26 ) << endl;;

}

bool duplicate(){
    for( auto it= m.begin(); it!= m.end(); ++it ){
        if( it->second > 1 ){
            return true;
        }
    }
    return false;
}

int main(){

    cin >> s;

    int c= 0;
    int n= (int)s.length();
    int target= 26;

    /*
    for( int i= 0; i< n; ++i ){
        cout << s[i] ;

        if( i <= 9 )
            cout << ' ';
        else
            cout << "  ";
    }

    cout << endl;

    for( int i= 0; i< n; ++i )
        cout << i << ' ';

    cout << endl;

    */

    if( n < 26 ){
        cout << -1 << endl;
        return 0;
    }

    for( int i= 0; i< target; ++i ){
        if( s[i]!= '?' ){
            m[s[i]]++;
        }else{
            c++;
        }
    }

    /*
    for( auto it= m.begin(); it!= m.end(); ++it ){
        cout << '\t' << it->first << ' ' << it->second << endl;
    }
    */

    if( c+m.size()== target ){
        work( 0 );
        for( int i= 0; i< n; ++i ){
            if( s[i]== '?' )
                s[i]= 'A';
        }
        cout << s;
        return 0;
    }

    bool flag= false;

    for( int i= 26; i< n; ++i ){
        if( s[i]== '?' ){
            c++;
        }else{
            m[s[i]]++;
        }

        if( s[i-target]== '?' ){
                c--;
        }else{
            m[s[i-target]]--;

            if( m[s[i-target]]== 0 ){
                m.erase( s[i-target] );
            }
        }

        //cout << i << ' ' << s[i] << ' ' << (i-26) << ' '<< s[i-26] << endl;
        /*
        for( auto it= m.begin(); it!= m.end(); ++it ){
            cout << '\t' << it->first << ' ' << it->second << endl;
        }
        */

        if( c+m.size()== target && !duplicate() ){
            //cout << i << ' ' ;
            work( i-target+1 );
            flag= true;
            break;
        }
    }

    for( int i= 0; i< n; ++i ){
        if( s[i]== '?' )
            s[i]= 'A';
    }

    if( !flag ){
        cout << -1 << endl;
    }else{
        cout << s << endl;
    }

    return 0;
}
