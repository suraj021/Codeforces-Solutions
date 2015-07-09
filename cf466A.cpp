#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, m, a, b;

	cin >> n >> m >> a >> b;

	int low_bound= (n/m)*b + b;
	int upp_bound= n*a;
	int mid_bound= (n/m)*b + (n%m)*a;


	//cout << low_bound << " " << mid_bound << " " << upp_bound << endl;

	cout << min( min( low_bound, upp_bound ), mid_bound ) << endl;
}