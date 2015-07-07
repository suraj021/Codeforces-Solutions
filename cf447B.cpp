#include <bits/stdc++.h>

using namespace std;

int N= 26;

int main(){

	int a[N];

	string s;
	int k;

	cin >> s ;
	cin >> k ;

	for( int i= 0; i< N; ++i )
		cin >> a[i];

	int sum= 0;

	int i;

	for( i=0; i< s.length(); ++i )
		sum+= a[s[i]-'a']*(i+1);

	//cout << sum << endl;

	sort( a, a+ N );

	int j= k+s.length();

	while( k-- ){

		sum+= a[N-1]*j;

		//cout << sum << " ";

		j--;
	}

	//cout << "\n" ;

	cout << sum << endl;


}