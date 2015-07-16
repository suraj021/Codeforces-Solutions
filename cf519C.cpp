#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, m;

	scanf( "%d%d", &n, &m );

	int count= 0;

	if( n > m ){

		while( true ){

			if( n>= 2 && m >=1 ){
				count++;

				n-= 2;
				m-= 1;
			}

			if( n== m ){

				count+= ( n + m )/3;
				break;
			}

			if( n < 2 || m < 1 )
				break;

		}

		if( n== 1 && m >= 2 )
			count++;


	}else if( n < m ){

		while( true ){

			if( n >= 1 && m>= 2 ){

				count++;

				n-= 1;
				m-= 2;
			}

			//cout << n << " " << m << endl;

			if( n < 1 || m < 2 ){

				break;
			}

			if( n== m ){

				count+= ( n + m )/3; 
				break;
			}
		}

		if( m==1 && n >= 2 )
			count ++;

	}else
		count= ( m + n )/3;

	cout << count << endl;
}