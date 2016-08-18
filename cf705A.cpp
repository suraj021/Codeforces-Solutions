#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

int main(){

    string a= "I hate it";
    string b= "I hate that";
    string c= "I love that";
    string d= "I love it";

    int n;

    cin >> n;

    int i= 1;

    for( int i= 1; i <= n; ++i ){

        if( i!= 1 )
            cout << ' ';
        cout << "I ";

        if( i%2== 0 )
            cout << "love ";
        else
            cout << "hate ";

        if( i== n )
            cout << "it";
        else
            cout << "that";

    }


}
