#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define ff first
#define ss second


int main(){

	double p, q;
	int length;

	cin >> length;
	cin >> p >> q ;

	double t= length/( p + q );

	printf("%0.4lf\n", p*t );


}