#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;

	string s;

	cin >> n;
	cin >> s;

	int j= n-1;

	int sum1= 0;
	int sum2= 0;

	for( int i=0; i< n/2; ++i ){

		if( s[i]!= '4' && s[i]!= '7' || s[j]!= '4' && s[j]!= '7' ){

			printf("NO\n");
			return 0;
		}

		sum1+= s[i] - '0';
		sum2+= s[j] - '0';

		j--;

	}

	if( sum1== sum2 )
		printf("YES\n");
	else
		printf("NO\n");


}