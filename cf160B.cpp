#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	string s;

	cin >> n;
	cin >> s;

	sort( s.begin(), s.begin()+n );
	sort( s.begin()+n, s.end() );

	int countl= 0;
	int countm= 0;

	for( int i=0; i< n; ++i ){

		if( s[i] > s[n+i] )
			countm++;

		if( s[i] < s[n+i] )
			countl++;
	}

	if( countl== n || countm== n )
		printf("YES\n");
	else
		printf("NO\n");
}