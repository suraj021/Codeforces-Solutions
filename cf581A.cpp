#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

int main(){

	int a, b;

	cin >> a >> b;

	int count= min( a, b );
	int ans= 0;

	a-= count;
	b-= count;

	ans+= a/2;
	ans+= b/2;

	cout << count << " " << ans << endl;
	
}