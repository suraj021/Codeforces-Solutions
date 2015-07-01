#include <bits/stdc++.h>

using namespace std;

int sum[100050];

int main(){

	string s;
	int q, l, r;

	cin >> s;

	sum[0]= 0;

	for( int i=1; i< s.length(); ++i )
		sum[i]= sum[i-1] + ( s[i]== s[i-1] );

	cin >> q;

	while( q-- ){

		cin >> l >> r;

		l--; r--;

		cout << sum[r] - sum[l] << endl;

	}

}