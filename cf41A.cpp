#include <bits/stdc++.h>

using namespace std;

int main(){

	string s, t;

	cin >> s;
	cin >> t;

	reverse( t.begin(), t.end() );

	if( s== t )
		printf("YES\n");
	else
		printf("NO\n");

}