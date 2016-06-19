#include <bits/stdc++.h>
using namespace std;

long f[100005];

int main(){

    int n;
    int len= 2, maxi= 2;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        cin >> f[i];
    }

    if( n== 1 || n== 2 )
        cout << n;
    else{

        for( int i= 2; i< n; ++i ){
            if( f[i]== f[i-1] + f[i-2] ){
                len++;
                if( len > maxi ){
                    maxi= len;
                }

            }
            else{
                if( len > maxi ){
                    maxi= len;
                }
                len= 2;
            }
        }

        cout << maxi ;
    }

}