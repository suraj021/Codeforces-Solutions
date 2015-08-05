#include <bits/stdc++.h>

using namespace std;

long int diff[17];

int main(){

	long int n, l, r, x;

	scanf( "%ld%ld%ld%ld", &n, &l, &r, &x );

	for( int i=0; i< n; ++i )
		 scanf( "%ld", &diff[i] );

	long int sum;

	vector < long int > vi;

	int count= 0;

	for( long int i=0; i< ( 1 << n ); ++i ){

		sum= 0;

		vi.clear();

		//cout << i << endl ;

		for( int j= 0; j < n; ++j ){

			if( i & ( 1 << j ) ){

				vi.push_back( diff[j] );
				sum+= diff[j];
			}

		}

		if( vi.size() >= 2 ){

			//cout << "      " << sum << endl;

			//cout << "            " ;

			//for( int i=0; i< vi.size(); ++i )
				//cout << vi[i] << " ";

			//cout << endl;

			if( sum <= r &&  sum >= l ){

				int maxi= INT_MIN;
				int mini= INT_MAX;

				for( int i=0; i< vi.size(); ++i ){

					if( vi[i] > maxi )
						maxi= vi[i];

					if( vi[i] < mini )
						mini= vi[i];
				}

				if( abs(maxi-mini) >= x )
					count++;
			}

		}
	}

	cout << count << endl;

}