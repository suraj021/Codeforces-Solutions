#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int a, b, c;

    cin >> a >> b >> c;

    if( c%a== 0 || c%b== 0 ){
        cout << "Yes" << '\n';
        return 0;
    }

    if( c < a && c < b ){
        cout << "No" << '\n';
        return 0;
    }

    int maxi= max( a, b );
    int mini= min( a, b );

    bool ans= true;

    while( c > 0 ){

        c= c - maxi;

        if( c < 0 ){
            c= c+maxi;
            c-= mini;

            if( c < 0 ){
                ans= false;
                break;
            }
        }else{
            if( c%mini== 0 )
                break;
        }

    }

    if( ans )
        cout << "Yes";
    else
        cout << "No";

}
