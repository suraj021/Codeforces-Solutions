#include <bits/stdc++.h>
using namespace std;

char ans[1000006];

int main(){

    string s;
    string t;

    cin >> s;

    t= s;

    reverse( t.begin(), t.end() );

    cout << s << t ;

    return 0;

}
