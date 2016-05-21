#include <bits/stdc++.h>

using namespace std;

int main(){

    int r, x1, y1, x2, y2;

    cin >> r >> x1 >> y1 >> x2 >> y2 ;

    double d= sqrt( fabs( x1-x2 )*fabs( x1-x2 ) + fabs( y1-y2 )*fabs( y1-y2 )  );

    cout << ceil(d/(2*r)) << '\n';

}
