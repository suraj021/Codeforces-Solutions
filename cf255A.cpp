#include <bits/stdc++.h>

using namespace std;

map< string, int > e;

int main(){

	int n, x;

	scanf( "%d", &n );

	for( int i=1; i<= n; ++i ){

		scanf( "%d", &x );

		if( i%3== 1 )
			e["chest"]+= x;
		else if( i%3== 2 )
			e["biceps"]+= x;
		else
			e["back"]+= x;

	}

	//cout << e["chest"] << " " << e["biceps"] << " " << e["back"] << endl;

	if( e["chest"] > e["biceps"] && e["chest"] > e["back"] )
		printf("chest\n");
	else if( e["back"] > e["biceps"] && e["chest"] < e["back"] )
		printf("back\n");
	else
		printf("biceps\n");

}