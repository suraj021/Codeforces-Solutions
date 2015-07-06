#include <bits/stdc++.h>

using namespace std;

//int arr[100001];

int main(){

	int n, x;

	scanf( "%d", &n );

	int count= 0;

	int crime= 0;

	for( int i=0; i< n; ++i ){

		scanf( "%d", &x );

		if( x == -1 ){

			if( count== 0 )
				crime++;
			else
				count--;	
		}else{

			count+= x;
		}

	}

	cout << crime << endl;

}