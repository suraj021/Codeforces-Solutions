#include <bits/stdc++.h>

using namespace std;

int main(){

	int a[5];

	string s;

	for( int i=1; i<= 4; ++i )
		scanf( "%d", a + i );

	cin >> s;

	long calorie= 0;

	for( int i=0; i< s.length(); ++i )
		calorie+= a[ s[i] - '0' ];

	cout << calorie << endl;
}