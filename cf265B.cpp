#include <bits/stdc++.h>
using namespace std;

int h[100005];

int main(){

    int n;

    cin >> n;

    for( int i= 1; i<= n; ++i )
        cin >> h[i];


    long long t= 0;

    t= h[1] + 1;

    //cout << t << ' ';

    for( int i= 2; i<= n; ++i ){

        if( h[i-1] > h[i] ){
            t+= ( h[i-1] - h[i] );
            t+= 2;
        }else{
            t+= 1;
            t+= ( h[i] - h[i-1] );
            t+= 1;
        }

        //cout << t << ' ';
    }

    cout << t << endl;
}
