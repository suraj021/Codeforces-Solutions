#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define ff first
#define ss second
#define pb push_back
#define mod 1000000007

int main(){

    string s;

    cin >> s;

    int n = (int)s.length();
    set<string> sc;

    for( int i= 0; i< n; ++i ){
        string t= s[n-1] + s.substr( 0, n-1 );
        sc.insert( t );
        s= t;
    }

    cout << (int)sc.size() << endl;
}
