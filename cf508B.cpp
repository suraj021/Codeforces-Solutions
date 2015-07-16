#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    bool flag= false;

    int mini= 10;
    int index;
    
    cin >> s;

    int n= s.length();

    int last= s[n-1]-'0';

    for( int i= 0; i< n; i++ ){

        int x= s[i]-'0';

        if( x%2== 0 ){

        	flag= true;

        	//cout << x << "  " << i << endl;

            if( x < last ){

            	swap( s[i], s[n-1] );
            	cout << s << endl;
            	return 0;
            }else{

            	index= i;

            }
            
        }

    }

    if( flag ){

        swap( s[index], s[n-1] );
        cout << s << endl;
        //cout << "her";

    }else
        printf("-1\n");

}