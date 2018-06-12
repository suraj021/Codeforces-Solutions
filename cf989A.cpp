#include <bits/stdc++.h>
using namespace std;
 
int main(){

	string str;
	string col= "ABC";

	cin >> str;

	bool flag= false;

	do{
		if( str.find( col )!= string::npos ){
			flag= true;
			//cout << col << ' ' << str.find( col ) << endl;
			break;
		}
	}while( next_permutation( col.begin(), col.end() ) );

	if( flag ){
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}

}
