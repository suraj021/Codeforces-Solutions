/*
	// Author: Suraj Bora
	// Email: surajbora021@gmail.com

*/

#include <bits/stdc++.h>

using namespace std;

vector<long> odd;

int main(){

    int n;
    long number;
    long long sum= 0;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        cin >> number;
        if( number%2== 0 )
            sum+= number;
        else{
            odd.push_back( number );
        }
    }

    long sz= odd.size();

    sort( odd.begin(), odd.end() );

    long x;

    if( sz%2== 0 ){
        x= 0;
    }else{
        x= 1;
    }

    for( int i= sz-1; i>= x; --i )
        sum+= odd[i];

    cout << sum ;

}