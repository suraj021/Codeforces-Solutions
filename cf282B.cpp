#include <bits/stdc++.h>
using namespace std;

char s[1000006];

int main(){

    int x, y, n;
    int a= 0, g= 0;
    bool flag= true;

    scanf( "%d", &n );

    for( int i= 0; i< n; ++i ){
        scanf( "%d%d", &x, &y );

        if( a-g >= 500 ){
            s[i]= 'G';
            g+= y;
        }else if( g-a >= 500 ){
            s[i]= 'A';
            a+= x;
        }else{

            if( (a+x)-g >= 500 ){
                s[i]= 'G';
                g+= y;
            }else if( (g+y)-a >= 500 ){
                s[i]= 'A';
                a+= x;
            }else{
                flag= false;
            }
        }

        //cout << s << ' ';
    }

    if( abs(a-g) > 500 || !flag ){
        cout <<  "-1";
    }else{
        printf( "%s", s );
    }
}
