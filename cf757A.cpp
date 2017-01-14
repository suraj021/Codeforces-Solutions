#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;
typedef pair< long, long > pll;

#define ff first
#define ss second
#define pb push_back
#define mod 1000000007

map< char, int > m;

char a[]= { 'B', 'u', 'l', 'b', 'a', 's', 'r' };

int main(){

    string s ;

    cin >> s;

    int n= (int)s.length();

    m['B']= m['u']= m['l']= m['b']= m['a']= m['s']= m['r']= 0;

    for( int i= 0; i< n; ++i ){
        bool flag= false;

        for( int j= 0; j< 7; ++j ){
            if( s[j]== a[i] ){
                flag= true;
                break;
            }
        }

        m[s[i]]++;
    }

    int ans= min( m['B'], min( m['u']/2 , min( m['l'], min( m['b'], min( m['a']/2, min( m['s'], m['r']) ) ))));


    cout << ans << endl;
}
