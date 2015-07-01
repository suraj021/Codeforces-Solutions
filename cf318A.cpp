#include <bits/stdc++.h>

using namespace std;

int main(){

	long long int n, k, ans;

	cin >> n >> k;;

	if( n%2== 0 ){

		if( k <= n/2 ){

			ans= 2*k - 1;
		}else{

			k-= n/2;

			ans= 2*k;
		}

	}else{

		if( k<= n/2 + 1 ){

			ans= 2*k - 1;
		}else{

			k= k- n/2 - 1;

			ans= 2*k;
		}

	}

	cout << ans << endl;

}