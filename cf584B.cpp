#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

long long mod= 1000000000 + 7;

long long int power( int n ){

	long long int ans= 3;

	for( int i= 2; i<= 3*n; ++i )
		ans= ( ans * 3 )%mod;

	return ans%mod;
}


int main(){

	int n;

	cin >> n;

	long long int ans1= power( n );
	long long int ans2= 7;

	for( int i= 1; i< n; ++i )
		ans2= ( ans2 * 7 )%mod;

	ans2= ans2%mod;

	long long int ans= ( ans1 - ans2 )%mod;

	if( ans < 0 )
		ans+= mod;

	cout << ans << endl;

}