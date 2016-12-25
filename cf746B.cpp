#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define ff first
#define ss second
#define pb push_back
#define mod 1000000007

int main(){

    int n;
    string s;
    char ans[2005];

    cin >> n;
    cin >> s;

    if( n%2== 0 ){
        int i= (n-1)/2;
        int j= i+1;
        for( int k= 0; k< n; ++k ){
            if( k%2== 0 ){
                ans[i]= s[k];
                i--;
            }else{
                ans[j]= s[k];
                j++;
            }
        }
    }else{
        int i= (n-1)/2;
        int j= i-1;
        for( int k= 0; k< n; ++k ){
            if( k%2== 0 ){
                ans[i]= s[k];
                i++;
            }else{
                ans[j]= s[k];
                j--;
            }
        }
    }

    for( int i= 0; i< n; ++i )
        cout << ans[i];

    cout << endl;

    return 0;
}
