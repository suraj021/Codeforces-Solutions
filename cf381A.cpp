#include <bits/stdc++.h>

using namespace std;

vector< int > v;

int main(){

	int n;
	int x;

	scanf( "%d", &n );

	for( int i=0; i< n; ++i ){

		scanf( "%d", &x );

		v.push_back( x );
	}

	long sereja= 0;
	long dima= 0;

	int count= 1;

	int i= 0;
	int j= n-1;

	while ( true ){

		//cout << i << "  " << j << endl;

		if( count%2!= 0 ){

			if( v[i] > v[j] ){
				sereja+= v[i];
				i++;
			}
			else{
				sereja+= v[j];
				j--;
			}


		}else{

			if( v[i] > v[j] ){
				dima+= v[i];
				i++;
			}
			else{
				dima+= v[j];
				j--;
			}

		}

		count++;
		//cout << "     " << sereja << " " << dima << endl;

		if( j-i < 0 )
			break;

	}

	//cout << i << " " << j << endl;

	//if( n%2!= 0 )
	//	sereja+= v[i];

	cout << sereja << " " << dima << endl;

}