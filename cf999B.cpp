#include <bits/stdc++.h>
using namespace std; 

int main(){
	
	int n;
	string s;

	cin >> n;
	cin >> s;

	for( int i= 2; i<= n; i+= 1 ){
		if( n%i== 0 ){
			reverse( s.begin(), s.begin() + i );
		}
	}

	cout << s << endl;
}