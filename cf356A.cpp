#include <bits/stdc++.h>
using namespace std;

int a;

map< int, int > m;

int main(){

    int sum= 0;

    for( int i= 0; i< 5; ++i ){
        cin >> a;
        m[a]++;
        sum+= a;
    }

    if( m.size()== 5 ){
        cout << sum << endl;
        return 0;
    }

    int x, mini= INT_MAX;

    for( auto it= m.begin(); it!= m.end(); ++it ){
        if( it->second > 1 ){
            if( it->second > 3 ){
                mini= min( mini, sum-it->first*3 );
            }else{
                mini= min( mini, sum-it->first*it->second );
            }
        }
    }

    cout << mini << endl;

}
