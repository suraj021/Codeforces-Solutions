#include <bits/stdc++.h>

using namespace std;

int main(){

	double n, m;

	cin >> n >> m;

	double up_bound= n;
	double lo_bound= ceil( n/2 );

	//cout << lo_bound << " " << up_bound << endl; 

	double ans= ceil( lo_bound/m )*m ;

	if( ans > n )
		printf("-1\n");
	else
		cout << ans << endl;


}