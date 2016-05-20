#include <bits/stdc++.h>
using namespace std;

long a[100005];

int main(){

    int n;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        cin >> a[i] ;
    }

    int p, q;
    p= q= 0;

    for( int i= 0; i< n-1; ++i ){
        if( a[i] > a[i+1] ){
            p= i;

            int j;
            for( j= i; j< n-1; ++j ){
                if( a[j] < a[j+1] ){
                    q= j;
                    break;
                }
            }

            if( j== n-1 )
                q= n-1;

            break;
        }

    }

    //cout << p << ' ' << q << '\n';

    reverse( a+p, a+q+1 );

    //for( int i= 0; i< n; ++i )
      //  cout << a[i] << ' ';

    bool is= true;

    for( int i= 0; i< n-1; ++i ){
        if( a[i] > a[i+1] ){
            is= false;
            break;
        }
    }

    if( is ){
        cout << "yes\n";
        cout << (p+1) << ' ' << ( q+1 ) << '\n';
    }else{
        cout << "no\n";
    }

    return 0;
}
