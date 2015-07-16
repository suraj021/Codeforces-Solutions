#include <bits/stdc++.h>

using namespace std;

map< char, int > keys;

int main(){

	string s;
	int n;

	scanf( "%d", &n );

	cin >> s;

	string door= "";
	string key= "";

	int count= 0;

	for( int i= 0; i< s.length(); ++i ){

		if( i%2== 0 ){
			keys[s[i]]++;
		}
		else{

			char c= tolower( s[i] );

			if( keys[c] > 0 )
				keys[c]--;
			else
				count++;
		}
			
	}

	cout << count << endl;

}