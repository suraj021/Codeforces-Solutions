#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

vector< int > v;

int main(){

    int n;
    string s;

    cin >> n;
    cin >> s;

    int i= 0;

    while( i < n ){

        if( s[i]== 'B' ){
            int c= 0;
            while( i < n && s[i]== 'B' ){
                c++;
                i++;
            }
            v.push_back( c );
        }else{
            i++;
        }
    }

    cout << v.size() << endl;

    for( int i= 0; i< (int)v.size(); ++i )
        cout << v[i] << ' ';
}
