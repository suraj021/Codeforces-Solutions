#include <bits/stdc++.h>

using namespace std;

int main(){

	long long a, b;

	cin >> a >> b;

	if( b - a < 2 ){

		printf("-1\n");
		return 0;
	}

	if( (b-a)== 2 && b%2!= 0 ){

		printf("-1\n");
		return 0;
	}

	if( a%2!= 0 ){

		cout << a + 1 << " " << a + 2 << " " << a + 3 << endl;
			
	}else{

		cout << a << " " << a+1 << " " << a+2 << endl;
	}

	return 0;
}