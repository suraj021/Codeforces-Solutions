#include <bits/stdc++.h>
using namespace std;

int a[105]= {0};

int main(){

    int n, d;
    char c;

    cin >> n >> d;

    for( int i= 0; i<d; ++i ){
        bool flag= false;
        for( int j= 0; j< n; ++j ){
            cin >> c;
            if( c== '0' ){
                flag= true;
            }
        }
        if( flag )
            a[i]= 1;
    }

    int maxo= 0;
    int len= 0;

    for( int i= 0; i< d; ++i ){
        if( a[i]== 0 ){
            len= 0;
        }else{
            len++;
        }
        if( len > maxo )
            maxo= len;
    }

    cout << maxo;

}
