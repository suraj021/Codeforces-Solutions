#include <bits/stdc++.h>

using namespace std;

int main(){

	long x;

	cin >> x;

	if( x&(x-1) == 0 ){
		cout << 1 << endl;
		return 0;
	}
	
	long count= 0;

	while( x> 1 ){
		if( x%2!= 0 )
			count++;
		//cout << x << " " << count << endl;
		x/= 2;
	}

	cout << count+1 << endl;
}

