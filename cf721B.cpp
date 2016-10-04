#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define mod 1000000007
#define pb push_back

vector< string > v;

bool comp( string a, string b ){
    return a.length() < b.length();
}

int main(){

    int n, k;
    string s, p;

    cin >> n >> k;

    for( int i= 0; i< n; ++i ){
        cin >> s;
        v.pb( s );
    }

    cin >> p;

    int l= (int)p.length();

    sort( v.begin(), v.end(), comp );

    if( l== v[0].length() ){

        cout << 1 << ' ';
        int i= 0;

        while( i < n && v[i].length() == l )
            i++;

        if( i <= k ){
            cout << i << endl;
        }else{
            int ans= 0;
            if( i%k== 0 ){
                i--;
                ans++;
            }
            ans+= 5*(i/k) + i;

            cout << ans << endl;
        }

    }else{

        int i= 0;
        while( i < n && v[i].length() != l ){
            i++;
        }

        i++;

        //cout << i<< ' ';

        if( i <= k )
            cout << i << ' ';
        else{
            int ans= 0;
            if( i%k== 0 ){
                i--;
                ans++;
            }
            ans+= 5*(i/k) + i;
            cout << ans << ' ';
        }

        int j= 0;
        while( j < n && v[j].length() <= l )
            j++;

        //cout << j << '\n';

        int x= 0;
        if( j%k== 0 ){
            j--;
            x++;
        }
        x+= 5*(j/k) + j;

        cout << x << '\n';

    }

}
