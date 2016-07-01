#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c, d;
    double p, q, di;

    cin >> a >> b >> c >> d;

    p= (double)a/b;
    q= (double)c/d;

    double ans= p/(1-(1-p)*(1-q));

    cout << ans << endl;;

}
