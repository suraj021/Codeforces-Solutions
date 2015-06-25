#include <bits/stdc++.h>

using namespace std;

int main(){

	string s1, s2;
	string s3;

	cin >> s1 ;
	cin >> s2 ;
	cin >> s3 ;

	if( s3.length()!= s1.length() + s2.length() )
		printf("NO\n");
	else{

		string s= s1 + s2;

		sort( s.begin(), s.end() );

		sort( s3.begin(), s3.end() );

		if( s== s3 )
			printf("YES\n");
		else
			printf("NO\n");
	}
}