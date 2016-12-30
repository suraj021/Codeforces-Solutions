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
    int n;
    long t;
    long down= 0, up= 0;
    bool flag_north= true;
    bool flag_south= false;
    bool fail= false;
    long dist= 0;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        cin >> t >> s;

        if( flag_north || flag_south ){
            if( s== "East" || s== "West" ){
                fail= true;
            }
        }

        if( s== "North" ){
            dist-= t;
            if( flag_north || dist < 0 ){
                fail= true;
            }
        }
        if( s== "South" ){
            dist+= t;
            if( flag_south || dist > 20000 ){
                fail= true;
            }
        }

        if( dist== 0 ){
            flag_north= true;
            flag_south= false;
        }
        if( dist == 20000 ){
            flag_north= 0;
            flag_south= 1;
        }

        if( dist > 0 && dist < 20000 ){
            flag_north= 0;
            flag_south= 0;
        }
    }

    if( fail || dist!= 0 ){
        cout << "NO";
    }else{
        cout << "YES";
    }

    return 0;

}
