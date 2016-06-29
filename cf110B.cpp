#include <bits/stdc++.h>
using namespace std;

char s[100005];

int main(){

    int n;;

    cin  >> n;

    for( int i= 0; i< 4; ++i ){

        int j= i;

        while( j < n ){
            s[j]= char( 'a' + i );
            j+= 4;
        }

    }

    cout << s;

}
