#include <bits/stdc++.h>
using namespace std;

long long gcd( long long a, long long b ){
    if( b== 0 )
        return a;
    return gcd( b, a%b );
}

int main(){
    long long a, b, c, d;
    cin >> a>> b >> c >> d;

    if( a < c || b < d ){
        int m= max( c, d ) ;
        a*= m;
        b*= m;
    }

    //cout << a << ' ' << b << ' ' <<  c << ' ' << d << '\n';

    double x= (double)a/(double)c;
    double y= (double)b/(double)d;

    if( x > y ){
        c= c*b;
        a= a*d;
        b= b*d;
        d= b;

    }else{
        d= d*a;
        b= b*c;
        a= a*c;
        c= a;

    }

    //cout<<a << ' ' <<b << ' ' <<c << ' ' <<d << endl;

    long long  i= a*b-c*d;
    long long j= a*b;

    //cout << i << ' ' << j << endl;

    if( i < 0 )
        i= -i;

    cout << i/gcd( i, j ) << '/' << j/gcd( i, j ) ;
}
