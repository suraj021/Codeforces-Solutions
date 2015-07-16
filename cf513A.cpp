#include <bits/stdc++.h>

using namespace std;

int main(){

	int n1, n2, k1, k2;

	cin >> n1 >> n2 >> k1 >> k2;

	int i= 1;

	while( true ){

		if( i%2!= 0 ){		// first player

			n1-= 1;

			if( n1 < 0 )
			break;	

		}else{				// second player

			n2-= 1;

			if( n2 < 0 )
				break;
		}

		i++;
	}

	//cout << i << endl;

	if( i%2!= 0 )
		printf("Second\n");
	else
		printf("First\n");
}