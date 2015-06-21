#include <bits/stdc++.h>

using namespace std;

int main(){

	string s1;
	string s2;

	cin >> s1;
	cin >> s2;

	int len= s1.length();

	string ans= "";

	for( int i=0; i< len; ++i ){

		if( s1[i] != s2[i] )
			ans+= '1';
		else
			ans+= '0';

		//cout << ans << endl;
	}

	cout << ans << endl;

}