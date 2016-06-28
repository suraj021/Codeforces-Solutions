#include <bits/stdc++.h>
using namespace std;

int a[100005];
int sum[100005]= {0};

int main(){

    int n, k;

    cin >> n >> k;

    for( int i= 0; i < n; ++i )
        cin >> a[i];

    int mini= INT_MAX;
    int id;

    for( int i= 0; i< n; ++i ){
        sum[i%k]+= a[i];
    }

    for( int i= 0; i< k; ++i ){
        if( mini > sum[i] ){
            mini= sum[i];
            id= i;
        }
    }

    cout << id+1;
}
