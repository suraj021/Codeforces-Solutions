#include <bits/stdc++.h>
using namespace std;

bool is_beautiful( string s ){

    int no_1= 0;
    int no_0= 0;

    for( int i= 0; i< s.length(); ++i )
        if( s[i]== '1' )
            no_1++;
        else if( s[i]== '0' )
            no_0++;

    if( no_0 + no_1 == s.length() ){

        if( no_1 == 1 )
            return true;
        else
            return false;
    }

    return false;

}

int num_zeroes( string s ){

    int zeroes= 0;

    for( int i= 0; i< s.length(); ++i )
        if( s[i]== '0' )
            zeroes++;

    return zeroes;

}

int main(){

    vector< string > v;

    int n;
    string c;
    string s;
    bool zero= false;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        cin >> s;

        if( s== "0")
            zero= true;
        else if( is_beautiful( s ) ){
            v.push_back( s );
            //cout << s << ' ';
        }else{
            c= s;
        }
    }

    if( zero ){
        cout << "0" ;
        return 0;
    }

    int zeroes= 0;

    for( int i= 0; i< v.size(); ++i ){
        zeroes+= num_zeroes( v[i] );
        //cout << zeroes << ' ';
    }

    //cout << endl;

    cout << c ;

    for( int i = 0; i< zeroes; ++i )
        cout << "0" ;

}
