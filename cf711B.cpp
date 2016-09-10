#include <bits/stdc++.h>
using namespace std;

long long a[505][505];
long long row[505]= {0};
long long col[505]= {0};
long long dia[2]= {0};

int main(){

    int n, x, y;
    long long diag1, diag2;

    diag1= diag2= 0;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        for( int j= 0; j< n; ++j ){
            cin >> a[i][j];
            row[i]+= a[i][j];
            col[j]+= a[i][j];
            if( a[i][j]== 0 ){
                x= i;
                y= j;
            }
        }

    }

    if( n== 1 ){
        if( a[0][0]== 0 )
            cout << 1 << endl;
        else
            cout << 1 << endl;
        return 0;
    }

    long long maxrowsum, maxcolsum;

    maxcolsum= maxrowsum= INT_MIN;

    for( int i= 0; i< n; ++i ){
        if( maxrowsum < row[i] ){
            maxrowsum= row[i];
        }
        if( maxcolsum < col[i] ){
            maxcolsum= col[i];
        }

    }

    int dcol, drow;
    dcol= drow= 0;

    for( int i= 0; i< n; ++i ){
        if( row[i] != maxrowsum )
            drow++;
        if( col[i] != maxcolsum )
            dcol++;
    }

    if( dcol > 1 || drow > 1 ){
        cout << -1 << endl;
        return 0;
    }

    for( int i= 0; i< n; ++i ){
        diag1+= a[i][i];
        diag2+= a[i][n-i-1];
    }

    long long missing= maxrowsum - row[x];
    col[y]+= missing;
    row[x]+= missing;

    if( x== y ){
        diag1+= missing;
    }

    if( x+y== n-1 ){
        diag2+= missing;
    }

    if( missing && maxrowsum== row[x] && maxrowsum== maxcolsum && col[y]== maxcolsum && diag1== maxrowsum && diag1== diag2 ){

        cout << 1ll*missing << endl;
    }else{
        cout << -1 << endl;
    }
}
