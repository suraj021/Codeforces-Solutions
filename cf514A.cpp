#include <bits/stdc++.h>

using namespace std;

inline string to_str( int i ){ stringstream ss; ss << i; string s; ss >> s; return s; }

int main(){

	string str;

	cin >> str;

	
	if( str.length() > 1 ){
		
		for( int i=0; i< str.length(); ++i ){

			if( str[i]== '9' && i== 0 ){

			}else{

				if( str[i]  > '4' )
				str[i]= 9 - ( str[i] - '0' ) +'0' ;
			}

		}
		
		cout << str << endl;
		
	}else
		cout << str << endl;

}