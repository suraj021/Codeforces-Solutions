#include <bits/stdc++.h>

using namespace std;

int main(){

	
	string s;

	cin >> s ;

	int i=0;
	int len= s.length();

	bool flag= false;

	for( i= 0; i< len; ++i )
		if( s[i]== '0' ){

			flag= true;
			break;
		}

	if( flag ){

		s.erase( i, 1 );
	}else{

		s.pop_back();
	}

	cout << s << endl; 

}