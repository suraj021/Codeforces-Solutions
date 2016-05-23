#include <bits/stdc++.h>

using namespace std;

char ans[200005];
int freq[10000];
bool exist[27];

int main(){

	memset( freq, 0, sizeof freq );
	memset( exist, 0, sizeof exist );

	string s;

	cin >> s;

	for( int i= 0; i< (int)s.length(); ++i ){
		freq[ s[i] - 'a' ]++;
		exist[ s[i] - 'a' ]= true;
	}

	//for( int i= 0; i< 26; ++i ){
	//	cout << char( 'a' + i ) << " " << exist[i] << endl;
	//}

	int first= 0;
	int last= 25;

	while( first < last ){

		while( !exist[first] ){
			first++;
		}

		//cout << endl;

		while( !exist[last] ){
			last--;
		}

		while( freq[first]%2== 0 )
			first++;
		while( freq[last]%2== 0 )
			last--;

		if( first > last )
			break;

		freq[first]++;
		freq[last]--;

		first++;
		last--;

	}

	//for( int i= 0; i< 26; ++i )
	//	cout << freq[i] << " ";

	//cout << endl;

	int here= 0;
	last= s.length()-1;
	char left;

	for( int i= 0; i< 26; ++i ){

		if( exist[i] ){

			if( freq[i]%2!= 0 ){
				left= 'a' + i;
				freq[i]--;
			}

			for( int j= 0; j< freq[i]/2; ++j ){
				ans[here]= ans[last-here]= 'a' + i ;
				here++;
			}

		}

	}

	if( s.length()%2!= 0 )
		ans[s.length()/2]= left;

	printf("%s\n", ans );

}