#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

int main(){

	int count[200001];

	memset( count, 0, sizeof count );

	int len;

	int t, x;

	string str;

	cin >> str;

	len= str.length();

	scanf( "%d", &t );

	while( t-- ){

		scanf( "%d", &x );

		count[x-1]++;

	}

	int sum= 0;

	for( int i=0; i<len/2; i++ ){

		sum+= count[i];

		if( sum%2!= 0 )
			swap( str[i], str[len-i-1] );
	}

	cout << str << endl;



}