#include <bits/stdc++.h>
using namespace std;

int x[100005], y[100005];
int home[100005], out[100005];
int cnt_home[100005];

int main(){

    int n;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        cin >> x[i] >> y[i];
        cnt_home[x[i]]++;
    }

    for( int i= 0; i< n; ++i ){
        home[i]= n-1;
        home[i]+= cnt_home[y[i]];
        out[i]= 2*(n-1) - home[i];
    }

    for( int i= 0; i< n; ++i )
        cout << home[i] << ' ' << out[i] << endl;

    return 0;
}
