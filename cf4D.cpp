#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;
typedef vector< int > vi;

#define ff first
#define ss second
#define mod 1000000007
#define pb push_back

vector< pair< pii, int > > vpii;
vi ans;
int dp[5005], p[5005];

bool comp( pair< pii, int > x, pair< pii, int > y ){
    long a= (long)x.ff.ff;
    long b= (long)x.ff.ss;
    long c= (long)y.ff.ff;
    long d= (long)y.ff.ss;

    return (1ll*a*b)<(1ll*c*d);

}

int main(){

    int n, w, h;

    cin >> n >> w >> h;

    vpii.pb( { { w, h }, 0 } );

    for( int i= 0; i< n; ++i ){
        int x, y;
        cin >> x >> y;

        if( x > w && y > h )
            vpii.pb( { { x, y }, i+1 } );

    }

    if( vpii.size() == 1 ){
        cout << 0 << endl;
        return 0;
    }

    sort( vpii.begin()+1, vpii.end(), comp );

    dp[0]= 0;
    n= vpii.size();

    //cout << n << endl;
    //for( int i= 0; i< n; ++i )
      //  cout << vpii[i].ff.ff << ' ' << vpii[i].ff.ss << ' ' << vpii[i].ss << endl;

    for( int i= 1; i< n ; ++i ){
        for( int j= 0; j< i; ++j ){
            if( vpii[j].ff.ff < vpii[i].ff.ff && vpii[j].ff.ss < vpii[i].ff.ss ){
                int x= dp[i];
                dp[i]= max( dp[i], dp[j]+1 );

                if( dp[i] > x )
                    p[i]= j;
            }
        }
    }

    int maxi= -1, id;
    for( int i= 0; i< n; ++i )
        if( maxi < dp[i] ){
            maxi= dp[i];
            id= i;
        }

    //cout << id << '\n';

    cout << maxi << endl;
    while( id!= 0 ){
        //cout << id << ' ' ;
        ans.pb(vpii[id].ss);
        id= p[id];
    }

    //cout << endl;

    for( int i= ans.size()-1; i>= 0; --i )
        cout << ans[i] << ' ';

}
