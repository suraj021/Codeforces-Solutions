#include <bits/stdc++.h>
using namespace std; 

#define ff first
#define ss second

map< char, int > mp;
bool removed[400005];

int main(){
	
	int n, k;
	string s;

	cin >> n >> k;

	cin >> s;

	if( k == n ){
		cout << "" << endl;
		return 0;
	}

	for( int i= 0; i< n; ++i ){
		mp[s[i]]++;
	}

	for( auto it= mp.begin(); it!= mp.end(); ++it ){
		if( k >= it->ss ){
			k-= it->ss;
			it->ss= 0;
		}else{
			it->ss-= k;
			k= 0;
			break;
		}

		//cout << k << ' ' ;
	}

	//cout << endl;

	memset( removed, false, n );

	for( int i= n-1; i>= 0; --i ){
		char c= s[i];

		if( mp[c] ){
			mp[c]--;
			removed[i]= false;
		}else{
			removed[i]= true;
		}

	}

	for( int i= 0; i< n; ++i ){
		if( !removed[i] )
			cout << s[i];
	}

	cout << endl;

	return 0;

}