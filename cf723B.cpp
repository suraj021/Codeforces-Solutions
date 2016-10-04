#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

int n;
string s;

int main(){

    cin >> n;
    cin >> s;

    int i= 0;
    int maxi= -1;
    int c= 0;
    int w= 0;

    //cout << s << endl;

    while( s[i]== '_' )
        i++;

    for( ; i< n;  ){
        if( (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z' ) ){
            //cout << i << ' ' ;
            c++;
            if( i+1 == n ){
                if( maxi < c )
                    maxi= c;
            }
            i++;

            //cout << i << ' ' << c << ' ' << maxi << '\n';
        }else if( s[i]== '_' ){
            //cout << i << ' ' ;

            if( c > maxi )
                maxi= c;
            c= 0;

            while( i < n && s[i]== '_' )
                i++;

            //cout << i << ' ' << c << ' ' << maxi << '\n';
        }else if( s[i]== '(' ){
            //cout << i << '(' ;

            if( c > maxi )
                maxi= c;
            c= 0;

            int a= i+1;
            int b;

            for( b= i; b < n; ++b ){
                if( s[b]== ')' )
                    break;
            }

            //cout << ')' << b << ' ';

            i= b+1;

            b-= 1;

            while( s[a]== '_' )
                a++;
            while( s[b]== '_' )
                b--;

            //cout << a << ' ' << b << endl;

            if( a <= b ){
                int cc= 0;
                for( int j= a; j<= b;  ){
                    //cout << j << ' ';
                    if( s[j]== '_' ){
                        cc++;
                        while( j <= b && s[j]== '_' )
                            j++;
                    }else{
                        j++;
                    }
                    //cout << j << '\n';
                }

                w+= ( cc+1 );
            }

            //cout << i << ' ' << c << ' ' << maxi << ' ' << w << '\n';
        }
    }

    if( maxi== -1 )
        cout << 0 << ' ';
    else
        cout << maxi << ' ';
    cout << w << endl;
}
