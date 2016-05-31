#include <bits/stdc++.h>
using namespace std;

int x[4][4];
int sum[4];
typedef pair< int, long > pil;
pil a[4];

int main(){

    for( int i= 1; i<= 3; ++i ){
        for( int j= 1; j<= 3; ++j ){
            cin >> x[i][j];
            sum[i]+= x[i][j];
        }

        a[i]= { i, sum[i] };

    }

    sort( a+1, a+4 );

    //cout << a[1].second << ' ' << a[2].second << ' ' << a[3].second << endl;

    for( int i= 3; i> 1; --i )
        a[i].second-= a[1].second;
    a[1].second= 0;

    //cout << a[1].first << ' ' << a[2].first << ' ' << a[3].first << endl;

    //cout << a[1].second << ' ' << a[2].second << ' ' << a[3].second << endl;

    x[a[1].first][a[1].first]= a[3].second + 1;
    x[a[2].first][a[2].first]= x[a[1].first][a[1].first]-a[2].second;
    x[a[3].first][a[3].first]= 1;

    long sum_dia= x[3][3] + x[1][1] + x[2][2];
    long sum_row1= sum[1] + x[1][1];
    long to_add= (sum_row1 - sum_dia)/2;

    for( int i= 1; i<= 3; ++i )
        x[i][i]+= to_add;

    for( int i= 1; i< 4; ++i ){
        for( int j= 1; j< 4; ++j ){
            cout << x[i][j] << ' ';
        }

        cout << endl;
    }

}
