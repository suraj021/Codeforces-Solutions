#include <bits/stdc++.h>

using namespace std;

int lucky[]= { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777 };

int main(){

	int n;

	scanf( "%d", &n );

	int flag= 0;

	for( int i=0; i< 14; ++i )
		if( n% lucky[i]== 0 ){

			flag++;
			break;
		}

	if( flag )
		printf("YES\n");
	else
		printf("NO\n");

}