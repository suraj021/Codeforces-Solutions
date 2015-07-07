#include <bits/stdc++.h>

using namespace std;

string ar[]= {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
int n;
string s;

typedef pair< int, int > pii;

priority_queue< pii > pq;

int match( string s, int i ){

	if( s.length()!= ar[i].length() ){
		//cout << s.length() << "  " << ar[i].length() << endl;
		return 0;
	}

	int count= 0;

	for( int j= 0; j< s.length(); ++j )
		if( ar[i][j]== s[j] )
			count++;

	return count;
}

int main(){

	scanf( "%d", &n );
	cin >> s;

	int count= 0;

	for( int i=0; i< s.length(); ++i )
		if( s[i]== '.' )
			count++;

	if( count== s.length() ){

		for( int i=0; i< 8; ++i )
			if( ar[i].length() == s.length() ){
				cout << ar[i] << endl;
				return 0;
			}

	}

	for( int i=0; i< 8; ++i ){

		int x= match( s, i );

		pq.push( { x, i } );

	}

	cout << ar[pq.top().second] << endl;

}