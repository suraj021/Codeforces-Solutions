#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

char c[27];

int main(){

    string s;
    int ans= 0;

    cin >> s;

    int n= (int)s.length();

    c[0]= 'a';

    for( int i= 1; i<= 25; ++i )
        c[i]= c[i-1] + 1;

    char curr= 'a';

    for( int i= 0; i< n; ++i ){
        int x, y;
        x= y= 0;
        char u= curr;

        while( u!= s[i] ){
            u++;

            if( u > 'z' )
                u= 'a';
            x++;
        }

        //cout << x << ' ';

        char z= s[i];

        while( z!= curr ){
            z++;

            if( z > 'z' )
                z= 'a';
            y++;
        }

        //cout << y << '\n';

        ans+= min( x, y );
        curr= s[i];
    }

    cout << ans << endl;

}
