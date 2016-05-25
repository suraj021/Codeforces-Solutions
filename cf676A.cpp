#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

int a[103];

int main(){

    int n, i1, in;

    cin >> n;

    for( int i= 1; i<= n; ++i ){
        cin >> a[i];

        if( a[i]== 1 )
            i1= i;
        if( a[i]== n )
            in= i;
    }

    //if( i1== 1 && in== n || i1== n && in== 1 ){
      //  cout << n-1 << endl;
        //return 0;
    //}

    int ans;

    //cout << i1 << ' ' << in << endl;

    if( in > i1 ){

        if( n-in >= i1-1 ){
            ans= n-i1;
        }else{
            ans= in-1;
        }

    }else{

        if( n-i1 >= in-1  ){
            ans= n-in;
        }else{
            ans= i1-1;
        }

    }



    cout << ans << endl;
}
