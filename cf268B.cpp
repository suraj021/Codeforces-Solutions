#include <bits/stdc++.h>

using namespace std;

int main(){

	long long  n;

	cin >> n;

	long long sum= 0;

	for( int i=0; i< n; ++i )
		sum+= ( n - i )*i;

	sum+= n;

	cout << 1l*sum << endl;

}