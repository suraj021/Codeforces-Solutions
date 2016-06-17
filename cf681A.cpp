#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

int main(){

    int n, before, after;

    cin >> n;
    string s;
    bool flag= false;

    for( int i= 0; i< n; ++i ){
        cin >> s >> before >> after;

        if( before >= 2400 && after > before ){
            flag= true;
        }
    }

    if( flag )
        cout << "YES\n";
    else
        cout << "NO\n";


}
